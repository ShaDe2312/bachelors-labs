#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

void MergeSort(int A[], int Low,int High)
{
    if(Low<High)
    {   int mid= floor(Low+High/2);
        MergeSort(A,Low, mid);
        MergeSort(A,mid+1,High);
        Merge(A,Low,mid,High);
    }
}


void Merge(int A[],int Low,int Mid,int High)
{
    //We will be merging two temporary arrays from Low to Mid and Mid+1 to high
    int size1= Mid-Low+1; //+1 Because for x elements, the last index is x-1
    int size2= High-Low;

    int arr1[size1], arr2[size2];

    for(int i=)
}


int main()
{

}

