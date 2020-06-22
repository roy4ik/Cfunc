#include<stdio.h>
int x[10];
int p;
int scanNumbers(int p);
int dataentry(int p);
int main() {
        //creating data entry for function (x) is number variable array, p amount of numbers needed
        p=2;
        dataentry(p);

        //checking that the numbers are in increasing order
        //determining data entry direction:
        int j = 0; if (x[j] > x[j+1])
        {
            printf("correcting data entry: parameters have to be in increasing order\n current order:");
                for (int j = 0; j<= 1; ++j) 
                {
                    printf(" %d : %d,", j, x[j]);
                }

            for (int j = 0; j <= 1; ++j) 
            {
                int temp[10];
                temp[j] = x [0];
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
                for (int j = 0; j<= 1; j++) 
                {
                    printf(" %d : %d,", j, x[j]);
                }
            }
        }

    
    return 0;
}



//user declared functions
//function to scan for numbers - in x array (p determines amount of required numbers):
int dataentry(int p){
    printf("Enter the numbers you need to enter seperated by enter button: \n");
    scanNumbers(p);
    return 0;
}

int scanNumbers(p) {
    printf("Enter %d numbers \n", p);
        for (int i = 0 ; i <= p-1 ; ++i) {
            int temp;
            temp = i;
            temp++;
            printf("Parameter number %d \n", temp);
            scanf(" %d, ", &x[i]);
        }
    return 0;
}
