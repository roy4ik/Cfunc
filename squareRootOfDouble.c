#include <stdio.h>
#include <math.h>
int sqrt();

int main()
{
    squareDouble();
    return 0;
};

int squareDouble()
{
    double x, power, root;

    printf("Enter the number of which you want to find the square root: \n");
    scanf("%2lf", &x);

    //determining the root
    root = sqrt(x);

    printf("The square root of %0.2lf is %0.2lf\n", x, root);

    //show the root formula
    printf("The calculation would be: %0.2lf ", root);

    for (power = 2; power <= root; power++)
    {
        printf("* %0.2lf", root);
    }

    printf("= %0.2lf", x);

    return 0;
}

