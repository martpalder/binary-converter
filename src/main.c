#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int askNumber();
void printBinary(unsigned int);
_Bool askQuit();

int main(void) {
	// variables
	unsigned int num;
	_Bool quit;
	
	while (1) {
		// ask a number
		num = askNumber();
		
		// print binary
		printBinary(num);
		
		// ask if user wants to quit
		quit = askQuit();
		if (quit) break;
	}
	
	return 0;
}

unsigned int askNumber()
{
	unsigned int num;
	printf("\nEnter a number: ");
	scanf("%u", &num);
	
	return num;
}

void printBinary(unsigned int num)
{
	char binary[sizeof(int) * 4 + 1];
	puts("\nBinary:");
	itoa(num, binary, 2);
	puts(binary);
}

_Bool askQuit()
{
	char choice;
	_Bool quit;
	printf("\nDo you want to continue? (Y/n): ");
	while (1) {
		scanf("%c", &choice);
		if (choice == 'y' || choice == 'Y'
		|| choice == 'n' || choice == 'N') break;
	}
	
	if (choice == 'y' || choice == 'Y') quit = 0;
	else if (choice == 'n' || choice == 'N') quit = 1;
	
	return quit;
}
