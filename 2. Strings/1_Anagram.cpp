// Finding if two strings are Anagram of each other or not
// Given that two strings are equal

#include<iostream>
using namespace std;

// M1 - using single array (count)

bool anagram(string s1,string s2)
{
   int n1=s1.length();
   int n2=s2.size();

    if (n1!=n2)
    {
       return false;
    }
   
   int count[256]={0};
  

    for (int i = 0; i < n1; i++)
    {
        count[s1[i]]++;     
    }

    for (int i = 0; i < n1; i++)
    {
        count[s2[i]]--;     
    }

   for (int i = 0; i < 256; i++)
   {
        if(count[i]!=0)
          return false;
   }

return true;

}



int main()
{
    string str1="geeks";
    string str2 ="keges";

    cout<<anagram(str1,str2);
 
    return 0;
}




/*

// M2 - using two different arrays (freq1,freq2)
// takes a little more space than M1 (i.e., space of array freq2[256])

bool anagram(string s1,string s2)
{
   int n1=s1.length();
   int n2=s2.size();

   if (n1!=n2)
   {
       return false;
   }
   
   int freq1[256]={0};
   int freq2[256]={0};

   for (int i = 0; i < n1; i++)
   {
        freq1[s1[i]]++;
        freq2[s2[i]]++;     
   }

   for (int i = 0; i < 256; i++)
   {
        int j=i;

        if(freq1[i]!=freq2[j])
           return false;
   }

return true;

}

*/


