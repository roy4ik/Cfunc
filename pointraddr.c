#include<stdio.h>
int main() {

    /// returning x and the address of x or px (output address expected: 5 : 0x7ffee488494c )
    int *px, x;
    x = 5;
    px = &x;
    

    //printing vaule and pointer address
    printf("%d : %p \n \n", x,  px);

    //creating y array and looping through y array (output: y : address of y [i])

    int *py, y[10] = {0};
    py = y;

    for (int i = 0; i < 10; ++i) {
        printf("%d : %d \n", i, *(py+1));
    }
    
    return 0;
}