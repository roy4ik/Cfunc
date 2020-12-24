#include <stdio.h>
#include <string.h>
int reverseString();

int main() {
    char newString = reverseString();
    return 0;
}

//reverses a string and returns it
int reverseString() {
    static char string[100];

    printf("Please enter the string to be reversed\n");
    fgets(string, sizeof(string), stdin);
    int j = (strlen(string) - 1);
    int i = j - 1;
    int t = 0; //index of new string

    // divide str length in two => swap from both ends until reaching the middle of the string
    j = j / 2;
    int isAnagram;
    while (j >= 0) 
    {
        string[(strlen(string)) + 1] = string[i];
        string[(strlen(string)) + 2] = string[t];
        string[i] = string[(strlen(string)) + 2];
        string[t] = string[(strlen(string)) + 1];
        --i;
        ++t;
        --j;
        if (string[i]!=string[t]){
            isAnagram = 0;
            }
        else {
            isAnagram =1;
            }
    }
    if (isAnagram == 1){
       printf("Oh we got an annagram!\n");
    } 
    puts(string);
    
    return 0;
}