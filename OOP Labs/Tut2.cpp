//Function to find smallest number

#include<iostream>
using namespace std;

float smallest( float *arr, size_t len)
{
    float min= arr[0];
    for(int i=0; i<len; i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }

    return min;
}

int main()
{
    size_t n;
    cout<<"Enter the number of numbers:\t";
    cin>>n;

    float array[n];

    for (size_t i = 0; i < n; i++)
    {
        cout<<"Enter the number: ";
        cin>>array[i];
    }

    cout<<"\n\n The array is:\t";
    for (size_t i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    
    cout<<"\nThe smallest of them all is:\t"<<smallest(array, n);

    return 0;
}