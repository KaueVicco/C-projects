
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct {
	char name[50];
	char breed[50];
	char addressLine1[100];
	char addressLine2[100];
} Dog;
Dog ParameterDog()
{
	Dog newDog;
	printf("Enter the dog's name: ");
	gets(newDog.name);
	printf("Enter the dog's breed: ");
	gets(newDog.breed);
	printf("Enter the first address line: ");
	gets(newDog.addressLine1);
	printf("Enter the second address line: ");
	gets(newDog.addressLine2);
	return newDog;
}
void PrintDog(const Dog* pMyDog) {
	printf("%s is a good %s. Their address is: %s %s", pMyDog->name, pMyDog->breed, pMyDog->addressLine1, pMyDog->addressLine2);
}

void main() {
	Dog newDog = ParameterDog();
	PrintDog(&newDog);
}