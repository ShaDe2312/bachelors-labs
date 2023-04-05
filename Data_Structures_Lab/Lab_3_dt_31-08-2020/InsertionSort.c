#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{   int size;
    printf("Enter the number of elements in the array\t");
    scanf("%d", &size);

    int to_be_sorted[size];

    for(int i=0; i<size; i++)
        scanf("%d", &to_be_sorted[i]);  //Scanning the array.

    for(int CurrentKey=1; CurrentKey<size; CurrentKey++)  //mainloop
        for(int j=CurrentKey; j>0; j--)
            if(to_be_sorted[j-1]>to_be_sorted[j])
                swap(&to_be_sorted[j-1],&to_be_sorted[j]);
                
    
    printf("The sorted array is:\n");

    for(int i=0; i<size; i++)
        printf("%d\n", to_be_sorted[i]);
    

}