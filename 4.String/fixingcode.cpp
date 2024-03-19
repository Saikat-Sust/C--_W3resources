/*
11. Write a C++ program to find a word in a given string that has the highest number of repeated letters.
Example:
Sample Input: Print a welcome text in a separate line.
Sample Output: Word which has the highest number of repeated letters. separate
*/
#include<bits/stdc++.h>
using namespace std;

string check_word(string s)
{
    string a,b,d,e;
    int c,co=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            b=a;
            d=a;
            a="";
            c=0;
            char temp;
            for (int i=0; i<b.size(); i++)
            {
                for(int j=0; j<b.size()-1; j++)
                {
                    if(b[j]>b[j+1])
                    {
                        temp=b[j];
                        b[j]=b[j+1];
                        b[j+1]=temp;
                    }

                }
            }
            for(int i=0; i<b.size(); i++)
            {
                if(b[i]==b[i+1])
                    c++;
            }
            if(c>co)
            {
                co=c;
                e=d;
            }
        }

        else
            a+=s[i];
    }

    return e;
}

int main()
{
    string s;
    cout<<"Input the String:"<<endl;
    getline(cin,s);
    string results=check_word(s);
    if(!result.empty())
    cout<<results<<endl;
    else
    cout<<"No Word Repeated";
    return 0;
}

