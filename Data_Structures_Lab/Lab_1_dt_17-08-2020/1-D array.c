#include<stdio.h>
/*
Perfect Sum Problem

Given an array arr[] of integers and an integer K,
the task is to print all subsets of the given array
with the sum equal to the given target K.
*/
int main()
{   
    int size_of_array,key;
    printf("Please enter size of the array:\t");
    scanf("%d", &size_of_array);

    int array[size_of_array];
    printf("Please enter the Key K (integer)\t");
    scanf("%d",&key);

    for(int i=0; i<size_of_array; i++)
    {
        printf("Enter integer number %d:\t", i+1);
        scanf("%d", &array[i]);
    }
    printf("\n\nKeys are: \n");
    
    for(int i=0; i<size_of_array; i++)
    {
        for(int j=i+1; j<size_of_array; j++)
        {
            if( array[i]+ array[j] == key)
                printf("%d %d", array[i], array[j]);
        }
    }

}