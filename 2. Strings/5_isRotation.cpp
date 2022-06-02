#include<iostream>
using namespace std;

bool isRotation(string s1,string s2)
{
    if (s1.length()!=s2.length())
    {
        return false;
    }

    s1=s1+s1;

    return(s1.find(s2)!= string::npos);
    
}

int main()
{
    string str1="ABCD";
    string str2="CDAB";

    cout<<isRotation(str1,str2);
 
    return 0;
}