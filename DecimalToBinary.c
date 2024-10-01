#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void decimalToBinary(unsigned int n){
	int exponent = 128;
	while (exponent >= 1) {
		if (n >= exponent)
		{
			printf("1");
			n -= exponent;
		}
		else if (n < exponent)
			printf("0");
		exponent = exponent / 2;
	 }
}
void main() {
	unsigned int userInput;
	printf("Enter any number to convert to Binary: ");
	scanf("%i", &userInput);
	decimalToBinary(userInput);
}