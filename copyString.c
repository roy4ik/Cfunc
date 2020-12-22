#include <stdio.h>
#include <string.h>

char stringCopy(char firstString, char secondString)

int main()
{
    char firstString[20] = "Copying String\n";
    char secondString[20];
    char newString[(strlen(firstString) + -1) + (strlen(secondString) + -1)];
    newString = stringCopy(firstString, secondString)
    
    return 0;
}

//copies the secondString(including the null character) to the firstString. returns firstString
char stringCopy(char firstString, char secondString)
{
    //copying string 1 to string 2
    char firstString = strcpy(firstString, secondString);

    //print copyied string
    printf("%s", firstString);
    return firstString;
}