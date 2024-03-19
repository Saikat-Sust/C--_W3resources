/*
4. Write a C++ program to find the largest word in a given string.
Example:
Sample Input: C++ is a general-purpose programming language.
Sample Output: programming
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
    char x[50];
    string y, z;
    int c = 0;

    cout << "Enter a string: ";
    cin.getline(x, 50);

    for (int i = 0; x[i] != '\0'; i++) {
        if (x[i] != ' '&&x[i]!='-') {
            y += x[i]; // Append character to y to form a word
            c++;
        } else {
            if (c > z.length()) {
                z = y; // Update z with the longest word found so far
            }
            y = ""; // Reset y for the next word
            c = 0;  // Reset word length counter
        }
    }

    // Check the last word
    if (c > z.length()) {
        z = y;
    }

    cout << "Longest word: " << z << endl;

    return 0;
}
