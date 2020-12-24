#include <stdio.h>
#include <stdlib.h>
int x[10];
int p; //number of parameters
int r; //number of numbers between intervals (Range)
int scanNumbers(int p);
int dataEntry(int p);
int calcRange();
int calcPrime();
int correctDirection();
int main()
{
    //creating data entry for function (x) is number variable array, p amount of numbers needed
    p = 2;
    dataEntry(p);
    correctDirection(p);
    calcRange();
    calcPrime();

    return 0;
}

//user declared functions
//function to scan for numbers - in x array (p determines amount of required numbers):
int dataEntry(int p)
{
    printf("Enter the numbers you need to enter seperated by the 'Enter' button: \n");
    scanNumbers(p);

    return 0;
}

int scanNumbers(p)
{
    printf("Enter %d numbers \n", p);
    for (int i = 0; i <= p - 1; ++i)
    {
        int temp;
        temp = i;
        temp++;
        printf("Parameter number %d \n", temp);
        scanf(" %d, ", &x[i]);
    }

    return 0;
}
int correctDirection()
{
    //checking that the numbers are in increasing order
    //determining data entry direction:
    int j = 0;
    if (x[j] > x[j + 1])
    {
        printf("correcting data entry: parameters have to be in increasing order\n current order:");
        for (int j = 0; j <= 1; ++j)
        {
            printf(" %d : %d,", j, x[j]);
        }

        for (int j = 0; j <= 1; ++j)
        {
            int temp[10];
            temp[j] = x[0];
            j++;
            temp[1] = x[1];
            j--;
            if (temp[0] > temp[1])
            {
                x[j] = temp[1];
                //printf("\n temp %d : %d,", j, x[j]);
                j++;
                x[j] = temp[0];
                //printf("\n temp %d : %d,", j, x[j]);

                printf("\n reordering the arrays");
            }
            printf("\n new order: ");
            for (int j = 0; j <= 1; j++)
            {
                printf(" %d : %d,", j, x[j]);
            }
            printf("\n\n");
        }
    }
    
    return 0;
}

int calcRange()
{
    // generating range of numbers between X[j] and x[j+1]
    int j = 0;
    r = ((x[j] - (x[j + 1])) + 1) * -1;
    if (r >= 1)
    {
        printf("there are %d numbers in the range between the entered numbers\n", r);
    }
    else
    {
        printf("you have entered the same number twice\n");
    }
    printf("\n");
    return 0;
}

int calcPrime()
{

    int j = 0;
    printf("These are the prime numbers between the entered intervall:\n");
    for (x[j]++; x[j] <= x[j + 1]; x[j]++)
    {
        int flag = 1;
        for (int i = 2; i <= (x[j] / 2); i++)
        {
            if (x[j] % i <= 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", x[j]);
        }
    }
    printf("\n");
    return 0;
}