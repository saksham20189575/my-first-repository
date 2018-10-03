/*
Given a string,S , of length N that is indexed from 0 to N-1, print its even-indexed and odd-indexed characters as
space-separated strings on a single line.

Input Format
The first line contains an integer, t (the number of test cases)(1<=t<=10).
Each line i of the t subsequent lines contain a String,S .
length of S(2 to 10000).
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s,s1="",s2="";
        cin>>s;
        for(int j=0;j<s.size();++j)//++j reduces time
        {
            if(j%2==0)
            {
                s1+=s[j];
            }
            else
            {
                s2+=s[j];
            }
        }
        cout<<s1<<" "<<s2;
        if(t!=0)
           cout<<"\n";
    }
    return 0;
}
