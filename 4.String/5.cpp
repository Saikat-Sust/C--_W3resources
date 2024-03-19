/*
5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
Example:
Sample Input: python
Sample Output: hnopty
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    char temp;
   cin>>x;
   for(int i=0;i!=x.size();i++)
   {
    for (int j=0;j!=x.size()-1;j++)
    {
        if(x[j]>x[j+1])
        {temp=x[j];
        x[j]=x[j+1];
        x[j+1]=temp;}
   }
}
   cout<<x;
}
