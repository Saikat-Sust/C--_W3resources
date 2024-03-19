/*
2.Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).
Example:
Sample Input: w3resource
Sample Output: x3sftpvsdf
*/


#include <bits/stdc++.h>
using namespace std;

string str(string a);

int main() {
    string a;
    cin >> a;
    cout << str(a);
    return 0;
}

string str(string a) {
    string b = a;
    int l = a.length();
    for (int i = 0; i < l; i++) {
        if (b[i] == 'z') {
            b[i] = 'a';
        } else if (b[i] == 'Z') {
            b[i] = 'A';
        } else if (!isdigit(b[i])) { // Check if not a digit
            b[i]++;
        }
    }
    return b;
}
