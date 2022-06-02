#include<iostream>
using namespace std;

void Reverse(int arr[],int n)
{
    int l=0,r=n-1;

    while (l<r)
    {
       int temp=arr[l];
       arr[l]=arr[r];
       arr[r]=temp;             
       l++;
       r--;

       // giving error with swap() function
    }
    
}

int main()
{
      int arr[]={4,24,1,89,57,13};
    int n= sizeof(arr)/sizeof(arr[0]);

    Reverse(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 
    return 0;
}