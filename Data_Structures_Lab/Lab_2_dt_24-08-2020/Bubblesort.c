/*
Start

Initialise an array

Iterate through the array using iterator 'i'

if(array[++i]< array[i]); swap the elements

Repeat until an iteration occurs where no swapping is required.

Stop

*/

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}


int main()
{   int size,temp;
    printf("Enter the number of elements in the array\t");
    scanf("%d", &size);

    int to_be_sorted[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d", &to_be_sorted[i]);
    }

    for(int i=0; i<size; i++)
    
        for(int j=0; j<size-i;j++)
        
            if(to_be_sorted[j]>to_be_sorted[j+1])
                swap(&to_be_sorted[j],&to_be_sorted[j+1]);
        
    

    printf("The sorted array is:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\n", to_be_sorted[i]);
    }

}
