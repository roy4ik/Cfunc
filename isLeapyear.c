#include<stdio.h>
int year;
int isLeapYear(int year);

int main()
{ 
    //creating input
    printf("Enter the year which you want to check in the gregorian calendar: ");
    scanf("%d", &year);
    isLeapYear( year);
       
    return 0;
}

int isLeapYear(int year){
    //calculating that not leap year
    if ((year % 100 == 0) || (year % 4 == 0) || (year / 400 == 0))
    {
        printf("The year %d is a leap year!\n", year);
    }
    else
    {
        printf("The year %d is not a leap year!\n", year);
    }
    return 0;
}