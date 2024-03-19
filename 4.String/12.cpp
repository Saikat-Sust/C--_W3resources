/*
12. Write a C++ program to insert a dash character (-) between two odd numbers in a given string of numbers.
Example:
Sample Input: 1345789
Sample Output: Result-> 1-345-789
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cout<<"Enter the Number: ";
    cin>>x;
            cout<<x[0];
    for(int i=1;i<x.size();i++)
    {
        if(x[i]%2!=0&&x[i-1]%2!=0)
        {
            cout<<"-"<<x[i];
        }
        else
            cout<<x[i];
    }
}
