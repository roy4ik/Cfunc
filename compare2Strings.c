#include <stdio.h>
#include <string.h>

int main() 
{
    strcompare()
    return 0;
}


int strcompare()
{
    char string1[20];
    char string2[20];

    //catching the two strings
    printf("Please enter the two strings that are to be compared\n");
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);

    //comparing if strings are identical
    int identical = 0;
    if (strcmp(string1, string2) == 0)
    {
        printf("the entered strings are identical\n");
        identical = 1;
    }
    else
    {
        printf("the entered strings are not identical at all\n");
        identical = -1;
    }
    return identical;
}