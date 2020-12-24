#include <stdio.h>
#include <stdlib.h>
int *ptr;
int n = 5, i;
int mallocation();
int callocation();
int freeWilly();

int main()
{
    //mallocation();
    callocation();
    free(ptr);
    freeWilly(); // jump willy jump and be free:)
    return 0;
}

int mallocation()
{
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory successfully allocated\n");

        for (i = 0; i <= n; ++i)
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are:\n");
        for (i = 0; i <= n; ++i)
        {
            printf("%d : %p\n", ptr[i], &ptr[i]);
        }
    }
    return 0;
}

int callocation()
{
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        printf("Memory successfully allocated\n");

        for (i = 0; i <= n; ++i)
        {
            ptr[i] = i + 1;
        }
        printf("The elements of the array are:\n");
        for (i = 0; i <= n; ++i)
        {
            printf("%d : %p\n", ptr[i], &ptr[i]);
        }
    }

    return 0;
}

int freeWilly() {
    ptr = NULL;
    if (ptr == NULL)
    {
        printf("Memory has been successfully freed\n");
    }
    else
    {
        printf("Memory has not been freed!\n");
    }
    return 0;
}