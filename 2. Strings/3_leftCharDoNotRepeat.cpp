// In this question, for every character: we keep track of index when it first time occurs in array
// When a element repeats, we update the value of that index as -2 in the count array
// Then by iterating over count array, we find the min index

#include<iostream>
using namespace std;

int leftmostCharThatNotRepeats(string s)
{
    int count[256];
    int res=INT_MAX;

    for(int i = 0; i < 256; i++)
    {
         count[i]=-1;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if(count[s[i]]==-1)
           count[s[i]]=i;

        else    // updating the repeating char index as -2
          count[s[i]]=-2;    
    }

    for (int i = 0; i < 256; i++)
    {
        if(count[i]>=0)
          res=min(res,count[i]);
          
    }
    
    if (res==INT_MAX)
        return -1;
    else
       return res;   
}

int main()
{
    string str1="aabbccddeeee";
   
    cout<<leftmostCharThatNotRepeats(str1);
 
    return 0;
}