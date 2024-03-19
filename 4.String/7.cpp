/*
7. Write a C++ program to count all the vowels in a given string.
Example:
Sample Input: eagerer
Sample output: number of vowels -> 4
*/


#include<bits/stdc++.h>
using namespace std;
int check_vowel(string s)
{
        int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
        }
    }
            return c;
}
int main()
{
    string s;
    cout<<"Input the String:"<<endl;
    cin>>s;
    cout<<s<<" in this text the Vowel Number is: "<<check_vowel(s)<<endl;
}

