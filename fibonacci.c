#include<stdio.h>

int main (){
    int term = 0, term2 =1, nTerms, nextTerm;
    printf("Enter the number of terms");
    scanf("%d", &nTerms);
    //print term, save the sum of the first and the second run (i++ = term2), then set term to term2 and term2 to the priorly calculated sum omf term and term2.
    for (int index = 1; index <= nTerms; index++)
    {
        printf("%d ", term);
        nextTerm = term + term2;
        term = term2;
        term2 = nextTerm;    
    }

    return 0;
}