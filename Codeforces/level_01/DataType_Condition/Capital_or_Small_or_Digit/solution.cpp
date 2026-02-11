#include <iostream>
using namespace std;

int main()
{
    // Read a single character from input
    char inputCharacter;
    cin >> inputCharacter;

    // Convert character to its ASCII value
    const int asciiValue = int(inputCharacter);

    // Check if character is a digit
    if (asciiValue >= 48 && asciiValue <= 57)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;

        // Check if character is uppercase or lowercase
        if (asciiValue >= 65 && asciiValue <= 90)
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}