#include<iostream>
#include<algorithm>
using namespace std;

int LinearSearch(int Array[], int , int);
int BinarySearch(int Array[],int,int,int);


int main()
{   
    int size=0;
    cout<<"Please enter the size of the array:\t";
    cin>>size;
    int A[100];

    cout<<"Please enter the elements of the array\n\n";
    for(int i=0; i<size; i++)
        cin>>A[i];

    cout<<"\n\n The elements of the array are:\n";
    for (size_t i = 0; i < size; i++)
    {
        cout<<A[i]<<endl;
    }
    
    int key;
    cout<<"Enter the key:\t";
    cin>>key;

    cout<<"\nInitiating linear search for the key:\n";

    int pos=LinearSearch(A,key,size);

    if(pos=-1)
        cout<<"Key not in the array.";
    else
        cout<<"Key found at location:\t"<<pos+1;

    cout<<"Initiating Binary search for the key:\n";
    sort(A,A+size);
    pos=BinarySearch(A,key,0,size-1);
    if(pos=-1)
        cout<<"Key not in the array.\n\n";
    else
        cout<<"Key found at location:\t"<<pos+1<<"\n\n";

    return 0;        
}

int LinearSearch(int Array[], int Key, int size)
{    
   int i; 
    for (i = 0; i < size; i++) 
        if (Array[i] == Key) 
            return i; 
    return -1; 
}

int BinarySearch(int Array[], int Key,int from_position, int to_position)
{
    int mid=(from_position+to_position)/2;
    if(Key>Array[mid])
        BinarySearch(Array,Key,mid+1,to_position);

    else if(Key<Array[mid])
        BinarySearch(Array,Key,from_position,mid-1);

    else
    {
        return mid;
    }
        
}