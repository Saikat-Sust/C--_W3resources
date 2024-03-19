/*
3. Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.
Example:
Sample Input: cpp string exercises
Sample Output: Cpp String Exercises
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{

    char x[50];
    cin.getline(x, 50);
    int n=sizeof(x);
    for(int i=0;i<n;i++)
    {
    if(i==0||x[i-1]==' ')
    {
        x[i] = toupper(x[i]);
    }

    }

        cout << x<< " ";
}
