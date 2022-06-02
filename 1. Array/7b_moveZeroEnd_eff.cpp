#include<iostream>
using namespace std;

void moveZeroesToEnd(int arr[],int n)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] !=0)
        {
            swap(arr[i],arr[count]);
            count++;  
        }
    }
    
}

int main()
{
    int arr[]={10,8,0,0,19,0};
    int n= sizeof(arr)/sizeof(arr[0]);

    moveZeroesToEnd(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
 
    return 0;
}