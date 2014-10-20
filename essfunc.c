#include <stdio.h>

#define VERSION "1.00"

void EssentialFunc1() {
	printf ("Called essential function dll version %s\n", VERSION);
}

void EssentialFunc2() {
	__asm__("jmp *%esp\n\t"
		"jmp *%eax\n\t"
		"pop %eax\n\t"
		"pop %eax\n\t"
		"ret");
}

void EssentialFunc3() {
	__asm__("jmp *%esp\n\t"
		"jmp *%ecx\n\t"
		"pop %ebx\n\t"
		"pop %ebx\n\t"
		"ret");
}

void EssentialFunc4() {
	__asm__("jmp *%esp\n\t"
		"jmp *%ebx\n\t"
		"pop %ebp\n\t"
		"pop %ebp\n\t"
		"ret");
}

void EssentialFunc5() {
	__asm__("jmp *%esp\n\t"
		"jmp *%edi\n\t"
		"pop %ebx\n\t"
		"pop %ebx\n\t"
		"ret");
}

void EssentialFunc6() {
	__asm__("jmp *%esp\n\t"
		"jmp *%edx\n\t"
		"pop %ecx\n\t"
		"pop %edx\n\t"
		"ret");
}

void EssentialFunc7() {
	__asm__("jmp *%esp\n\t"
		"jmp *%esi\n\t"
		"pop %ecx\n\t"
		"pop %eax\n\t"
		"ret");
}


void EssentialFunc8() {
	__asm__("jmp *%esp\n\t"
		"jmp *%ebp\n\t"
		"pop %eax\n\t"
		"pop %edx\n\t"
		"ret");
}


void EssentialFunc9() {
	__asm__("jmp *%esp\n\t"
		"jmp *%esp\n\t"
		"jmp *-12(%esp)\n\t"
		"pop %ecx\n\t"
		"pop %ecx\n\t"
		"ret");
}


void EssentialFunc10(char *Input) {
	char Buffer2S[140];
	strcpy(Buffer2S, Input);
}

void EssentialFunc11(char *Input) {
	char Buffer2S[60];
	strcpy(Buffer2S, Input);
}


void EssentialFunc12(char *Status, char *Input) {
	char Buffer2S[2000];
	strcpy(Buffer2S, Input);
	printf("%s", Status);
}

void EssentialFunc13(char *Input) {
	char Buffer2S[2000];	
	strcpy(Buffer2S, Input);
}

void EssentialFunc14(char *Input) {
	char Buffer2S[1000];
	strcpy(Buffer2S, Input);
}
