#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

 int hourFunction(hour, minute, second)
{
	int sum = 0;
	sum += (hour * 60) * 60;
	sum += minute * 60;
	sum += second;
	return sum;
}
void main() {
	int hourf, minutef, secondf, totalseconds;
	printf("How many hours? ");
	scanf("%i", &hourf);
	printf("How many minutes? ");
	scanf("%i", &minutef);
	printf("How many seconds? ");
	scanf("%i", &secondf);
	totalseconds = hourFunction(hourf, minutef, secondf);
	printf("That is %i total seconds", totalseconds);
}