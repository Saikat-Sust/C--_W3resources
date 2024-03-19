/*
13. Write a C++ program to change the case (lower to upper and upper to lower cases) of each character in a given string.
Example:
Sample Input: Pythpn
Sample Output: pYTHON
*/



#include<bits/stdc++.h>
using namespace std;
string change_case(string x)
{
    for(int i=0;i<x.size();i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        {
            x[i]=toupper(x[i]);
        }
        else
            x[i]=tolower(x[i]);
    }
    return x;
}
int main()
{
    string x;
    cout<<"Enter the Number: ";
    cin>>x;
    cout<<change_case(x);
}
