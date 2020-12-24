#include <stdio.h>

// You have an array of numbers, calculate the maximum sum of contigious numbers in the array

// contigious numbers are adjacent numbers such as the 3,4,5, in 1,2,3,4,5,6.

int arrayOfContiguous[] = {100, 2, -30, 400, 5, 60, 7}; // max sum 465
int sizeofContigiousArray = -1;

//get the array.
//calculate sums
// run through through array. if placeInArray is smaller than 1, and larger than sizeContigiousArray -1 then placeinArray + placeinArray+1.
//                              else placeinArray + placeinArray+1 +placeinArray+2.
//
// check for highest sum


int main()
{
    //get array size:
    sizeofContigiousArray = sizeof(arrayOfContiguous) / sizeof(arrayOfContiguous[0]);
    if (sizeofContigiousArray > 0)
    {
        int highestSum = 0;
        for (int placeInArray = 0; placeInArray < sizeofContigiousArray; ++placeInArray)
        {
            if ((placeInArray == 0) || placeInArray == sizeofContigiousArray - 2)
            {
                if ((arrayOfContiguous[placeInArray] + arrayOfContiguous[placeInArray + 1]) > highestSum)
                {
                    highestSum = arrayOfContiguous[placeInArray] + arrayOfContiguous[placeInArray + 1];
                }
            }
            else if (arrayOfContiguous[placeInArray] + arrayOfContiguous[placeInArray + 1] + arrayOfContiguous[placeInArray + 2] > highestSum)
                {
                    highestSum = arrayOfContiguous[placeInArray] + arrayOfContiguous[placeInArray + 1] + arrayOfContiguous[placeInArray + 2];
                }
        }
        printf("This is the highest Sum of contigious Values in the array: %d \n", highestSum);
    }
    return 0;
}

