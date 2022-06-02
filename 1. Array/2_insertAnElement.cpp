// Inserting an Element in an array

#include<iostream>
using namespace std;

void printArr(int arr[],int k)
{
    for (int i = 0; i < k; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int insertElem(int arr[],int n,int x,int cap,int pos)
{
     if(cap==n)
     {
        return n;
     }
     
     int idx=pos-1;

     for (int i = n-1 ; i >= idx; i--)
     {     
         arr[i+1]=arr[i];
     }

     arr[idx]=x;
     return (n+1);

  
}

int main()
{
    int arr[]={4,24,1,89,57,13};
    int n= sizeof(arr)/sizeof(arr[0]);

    int k=insertElem(arr,n,57,10,3);
    printArr(arr,k);

    int a[]={41,241,111,891,157,138};
    int m= sizeof(a)/sizeof(a[0]);
    cout<<endl;
   int p= insertElem(a,m,57,6,3);
    printArr(a,p);
    
    
 
 
    return 0;
}