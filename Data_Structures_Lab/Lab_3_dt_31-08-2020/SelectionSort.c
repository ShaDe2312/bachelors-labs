#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{   
    int size,MinIndex;
    printf("\n\n\nImplementing Selection Sort.\nEnter the number of elements in the array\t");
    scanf("%d", &size);

    int to_be_sorted[size];

    for(int i=0; i<size; i++)
        scanf("%d", &to_be_sorted[i]);  //Scanning the array.

    

    for(int i=0; i<size; i++)   //Selection Sort
    {
        MinIndex=i;
        for(int j=i; j<size;j++)
            if(to_be_sorted[j]<to_be_sorted[MinIndex])
                MinIndex=j;

        swap(&to_be_sorted[i],&to_be_sorted[MinIndex]);     
    }

    printf("\n\nThe sorted array is:\n");
    for(int i=0; i<size; i++)
        printf("%d\n", to_be_sorted[i]);
    
}