
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef char* string;
void PrintList(string pArray[], int size)
{
	printf("These are the names in the list:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", pArray[i]);
	}
}
void main()
{
	string* pStringArray;
	int numberOfNames;
	char buffer[1000];
	printf("How many names will you to enter: ");
	scanf("%d", &numberOfNames);
	pStringArray = calloc(numberOfNames, sizeof(string));
		for (int i = 0; i < numberOfNames; i++)
		{
			printf("Enter a name: ");
			scanf("%s", &buffer);
			pStringArray[i] = malloc(strlen(buffer) + 1);
			strcpy(pStringArray[i], buffer);
		}
	PrintList(&pStringArray[0], numberOfNames);
	for (int i = 0; i < numberOfNames; i++)
	{

		free(pStringArray[i]);
	}
	free(pStringArray);
}
