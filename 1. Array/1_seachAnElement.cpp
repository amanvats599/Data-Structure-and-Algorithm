// Searching an Element in array

#include<iostream>
using namespace std;

int SearchElem(int arr[],int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x)
           return i;
    }

    return -1;
    
}

int main()
{
    int arr[]={4,24,1,89,57,13};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<SearchElem(arr,n,57)<<endl;
    cout<<SearchElem(arr,n,83)<<endl; 
    cout<<SearchElem(arr,n,4)<<endl; 
   
    return 0;
}