#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
    int myBigArray[50] = { 6,39,37,70,47,53,84,42,6,95,56,19,90,7,70,99,70,
    44,23,52,42,82,40,17,33,12,62,55,24,74,60,84,47,87,59,90,91,10,
    62,91,27,63,62,55,79,56,91,38,98,60 };
    int search, counter = 0;
    printf("What value do you want to search for (From 0 to 99)? ");
    scanf("%i", &search);
    for (int i = 0; i < 49; i++)
    {
        if (search > 99)
        {
            printf("Invalid value. Type another: ");
            scanf("%i", &search);
        }
        if (search == myBigArray[i])
        {
            printf("Found %d at index %d\n",search,i);
            counter++;
        }
    }
    if (counter == 0)
    {
        printf("Could not find %d in the array\n", search);
    }
    else
    printf("The number %d was found %d times", search, counter);
}
