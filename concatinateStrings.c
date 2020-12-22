#include <stdio.h>
#include <string.h>

char stringConcat(char firstString, char secondString);

int main()
{
    char firstString[40] = "Hello";
    char secondString[20] = " and good bye\n";

    char newString[255] = stringConcat(firstString,secondString)
    return 0;
};
//concatenates two strings, adding secondString to firstString and storing it in firstString
char stringConcat(firstString, secondString)
{
    strcat(firstString, secondString);
    printf("%s", firstString);
    return firstString;
};
