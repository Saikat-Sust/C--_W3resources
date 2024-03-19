/*
8. Write a C++ program to count all the words in a given string.
Example:
Sample Input: Python
Sample Output: number of words -> 1
*/


#include<bits/stdc++.h>
using namespace std;
int check_word(string s)
{
        int c=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
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
    getline(cin, s);
    cout<<" word number in this sentence: "<<check_word(s)<<endl;
}

