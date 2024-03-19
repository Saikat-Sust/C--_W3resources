/*
1. Write a C++ program to reverse a given string.
Example:
Sample Input: w3resource
Sample Output: ecruoser3w
*/


#include<bits/stdc++.h>
using namespace std;
string fun(string z);
int main()
{
    string x;
    cin>>x;
    cout<<fun(x);
}
string fun(string z)
{
    string n=z;
    int l=z.length();
    cout<<l;
  for(int i=0;i<l;i++)
  {
      n[l-i-1]=z[i];
  }
  return n;
}
