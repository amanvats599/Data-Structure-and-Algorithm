// Finding Largest Element of array

#include<iostream>
using namespace std;

int Largest(int arr[],int n)
{
    int lar=0;
    for (int i = 0; i < n; i++)
    {
       if(arr[lar]<arr[i])
           lar=i;
    }

    return lar;
    
}

int main()
{
    int arr[]={4,24,1,89,57,13};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<Largest(arr,n);
 
    return 0;
}