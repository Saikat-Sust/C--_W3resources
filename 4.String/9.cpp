/*
9. Write a C++ program to check whether two characters appear equally in a given string.
Example:
Sample Input: aabcdeef
Sample Output: True
*/


#include<bits/stdc++.h>
using namespace std;
string x="True",y="False";
string check_word(string s,char a,char b)
{
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==a&&s[i+1]==a)
        {
            c++;
        }
        if(s[i]==b&&s[i+1]==b)
        {
            c++;
        }
    }
    if(c%2==0)
        return x;
    else
        return y;
}
int main()
{
    string s;
    char a,b;
    cout<<"Input the String:"<<endl;
    cin>>s>>a>>b;
    cout<<"Result: "<<check_word(s,a,b)<<endl;
}

