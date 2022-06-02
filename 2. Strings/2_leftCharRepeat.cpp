// In this question, for every character: we keep track of index when it first time occurs in array
// when a element repeats, we return the min value(i.e., res=min(res,firstTimeOccurIndex[s[i]]); )

#include<iostream>
using namespace std;

int leftmostCharThatRepeat(string s)
{
    int n=s.length();
    int res=INT_MAX;

    int firstTimeOccurIndex[256];

    for (int i = 0; i < 256; i++)
    {
        firstTimeOccurIndex[i]=-1;
    }
    

    for (int i = 0; i < n; i++)

    {
        // In if condition ,we update the value of index when it first time occurs
        if ( firstTimeOccurIndex[s[i]]== -1  )  
        {
            firstTimeOccurIndex[s[i]]=i;
        }

        // Finding minimum index of repeating character (only for repeating character)
        else
        {
            res=min(res,firstTimeOccurIndex[s[i]]);
        }
        
    }
    if(res==INT_MAX)
      return -1;
    else
      return res;
    
}

int main()
{
    string str1="abcde";
   

    cout<<leftmostCharThatRepeat(str1);
 
    return 0;
}