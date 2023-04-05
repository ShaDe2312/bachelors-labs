#include <iostream>
#include<vector>
#include<math.h>
using namespace std;

//The function that we will be using to Merge Two Lists

vector<int> Merge(vector<int> A, vector<int> B , int m, int n) 
{   
    int ai=0,bi=0;
    vector<int> C;
    
    while(ai<m && bi<n )
    {
        if(A[ai]<B[bi])
        {
            C.push_back(A[ai]);
            ai++;
        }
        else
        {
            C.push_back(B[bi]);
            bi++;
        }
    }
    
    if(ai<=m-1)
    {
       for(;ai<B.size();ai++)
        C.push_back(A[ai]);
    }
    
    if(bi<=n-1)
    {
       for(;bi<B.size();bi++)
        C.push_back(B[bi]);
    }
    
    return C;
}

void MergeSort(vector<int> A,int Low, int High)
{
    if(Low!=High)
    {
        int mid= floor((Low+High/2));
        MergeSort(A,Low,mid);
        MergeSort(A,mid+1,High);
        Merge();
    }
}




int main()
{
    vector<int> A;
    MergeSort(A,0,A.size());
    for (int x : ) 
        cout << x << " ";
    
    
	return 0;
}
