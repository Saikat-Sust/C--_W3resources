/*
6. Write a C++ program to check whether the characters e and g are separated by exactly 2 places anywhere in a given string at least once.
+ Example:
Sample Input: eagerer
Sample Output: eagerer -> 1
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{

    string x;
    int c=0;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if((x[i]=='e'||x[i]=='g')&&(x[i+1]=='e'||x[i]=='g'))
        c++;

    }
    cout<<c<<endl;


}