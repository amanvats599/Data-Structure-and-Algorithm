//  we first store the count of first n2 characters in two arrays(full string and part)
// Then we traverse the loop from n2 to n1 and check if the pattern match ,
// if match we return true
// else we increase the (countFullstr[txt[i]]) to 1 and remove first( countFullstr[txt[i-n2]]-- )

#include<iostream>
using namespace std;

bool isSame(int a1[],int a2[])
{
    for (int i = 0; i < 256; i++)
    {
        if(a1[i]!=a2[i])
          return false;
    }

    return true;
    
}

bool isPermutationOfStringPresent(string txt,string part)
{
    int countFullstr[256]={0} , countPart[256]={0};

    int n1=txt.length(),n2=part.length();

    for (int i = 0; i < n2; i++)
    {
        countFullstr[txt[i]]++;
        countPart[part[i]]++;
    }

    for (int i = n2; i < n1; i++)
    {
        if(isSame(countFullstr,countPart))
           return true;

        countFullstr[txt[i]]++;  // storing the next index value count
        countFullstr[txt[i-n2]]--; // removing first index value count
        
    }
    
return false;  

}

int main()
{
    string txt="geeksforgeeks";
    string part="egek";

    cout<<isPermutationOfStringPresent(txt,part);
 
    return 0;
}