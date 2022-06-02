// Deleting an element from array

#include<iostream>
using namespace std;

int delElement(int arr[],int n,int x)
{
    int i;
    for ( i = 0 ; i <n ; i++)
     {   
        if (arr[i]==x)
        {
            break;
        }  
     }
        if(i==n)
          return n;

        for(int j=i;j<(n-1);j++)
        {
            arr[j]=arr[j+1];
        }

     return (n-1);

        
         
     
}

int main()
{
    int arr[]={4,24,1,89,57,13};
    int n= sizeof(arr)/sizeof(arr[0]);

    int k=delElement(arr,n,89);

    for (int i = 0; i < k ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
 
    return 0;
}