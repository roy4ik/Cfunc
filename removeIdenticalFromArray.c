#include <stdio.h>

//remove identical elements from an array so that each appears only once.

//questions: should the elements be overwritten? with what?

//assumptions:  array is unsigned int (can be everything though)
//              array length is given
//              required extra memory? No;
unsigned int array[12] = {1, 2, 3, 3, 7, 4, 4, 3, 5, 7, 6, 6};
unsigned int *arrayPtr = array;
int arrayLength = 11;

int removeIdentical(unsigned int *);
int shiftValues (unsigned int *, int, int,int, int, int);

int main()
{
    array[arrayLength] = removeIdentical(array);
    return 0;
}

int removeIdentical(unsigned int *array)
{
    if (array == NULL)
    {
        printf("there is nothing in your array...\n");
    }
    else
    {
        // scan through array
        for (int valueInArray = 0; valueInArray <= arrayLength; ++valueInArray) 
        {
            // scan through array for each element
            for (int secondValueInArray = valueInArray+1; secondValueInArray <= arrayLength; ++secondValueInArray)
            {
                //element is identical
                if (*(array+valueInArray) == *(array+secondValueInArray))
                {
                int recur =1;
                int recurmax = 2;
                shiftValues (array, valueInArray, secondValueInArray,arrayLength, recur, recurmax);
                arrayLength--;
                }
                
            }
        }
        for (int valueInArray = 0; valueInArray <= arrayLength; ++valueInArray)
        {
            printf("%x ", *(array+valueInArray));
        }
    }
    return 0;
}

int shiftValues (unsigned int *array,int valueInArray, int secondValueInArray,int arrayLength, int recur, int recurmax)
{
//rotating rest of the elements left and decrementing array length.
                for (int shiftBy = 1, shiftValue = secondValueInArray; shiftValue <= arrayLength; ++shiftValue)
                {
                    *(array+shiftValue) = *(array+shiftValue+shiftBy);
                }

return 0;
}