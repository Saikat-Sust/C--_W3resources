/*
10. Write a C++ program to check if a given string is a Palindrome or not.
A palindrome is a word, number, phrase, or other sequence of characters which reads the same backward as forward, such as madam, racecar.
Example:
Sample Input: madam
Sample Output: True
*/


#include<bits/stdc++.h>
using namespace std;
string x="True",y="False";
string check_word(string s)
{
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[s.size()-1])
            return x;
        else
            return y;
    }
}
int main()
{
    string s;
    cout<<"Input the String:"<<endl;
    cin>>s;
    cout<<"Result: "<<check_word(s)<<endl;
}

