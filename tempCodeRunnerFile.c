#include <stdio.h>
#include <math.h>

double squareDouble(double);

int main(){
    double x;
    double result;
    printf("Enter the number of which you want to find the square root: \n");
    scanf("%2lf", &x);
    result = squareDouble(x);

    printf("The square root of %0.2lf is %0.2lf\n", x, result);

    //show the root formula
    printf("The calculation would be: %0.2lf ", root);
    for (int power = 2; power <= result; power++)
    {
        printf("* %0.2lf", result);
    }

    printf("= %0.2lf\n", x);


    return 0;
};

double squareDouble(double x)
{
    double  root;
    //determining the root
    root = sqrt(x);

    return root;
}
