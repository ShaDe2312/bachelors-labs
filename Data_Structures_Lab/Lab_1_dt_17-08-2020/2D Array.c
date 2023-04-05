#include<stdio.h>

//Programme to find Transpose of a 2-D Martix

int main()
{   int MaxRow,MaxCol;
    printf("Please enter the number of rows and columns:\n");
    scanf("%d %d", &MaxRow, &MaxCol);
    int array[MaxRow][MaxCol];  //Creating our array (with garbage valies for now)

    for(int i=0; i<MaxCol; i++)
    {
        for(int j=0; j<MaxRow; j++)
        {
            printf("Please enter element number %d-%d:  ",i+1,j+1);
            scanf("%d", &array[i][j]);
            printf("\n");
        }
    }

    for(int i=0; i<MaxCol; i++)
    {
        for(int j=0; j<MaxRow; j++)
        {
            printf("%d\t",array[i][j]);
        }
        
    printf("\n");
    }

    printf("\nAfter transpose, the Matrix becomes:\n");

    for(int i=0; i<MaxCol; i++)
    {
        for(int j=0; j<MaxRow; j++)
        {
            printf("%d\t",array[j][i]);
        }
        
    printf("\n");
    }

}