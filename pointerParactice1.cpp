#include <iostream>
using namespace std;

// Write the given word in such a way that every letter of the word repeat itself for given time.

// Testcase:
// 5
// hello
// 2

int main()
{
    int size = 6;
    char word[size];
    cin.get(word, size);                  // hello
    for (int i = 0; word[i] != '\0'; i++) // iterating till last word
    {
        cout << word[i] << endl;
    }

    return 0;
}