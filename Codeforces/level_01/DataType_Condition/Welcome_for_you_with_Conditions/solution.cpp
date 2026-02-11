#include <iostream>
using namespace std;

int main()
{
    // Input values
    int firstNumber, secondNumber;

    cout << "Enter two integers (first second): ";
    cin >> firstNumber >> secondNumber;

    // Compare values
    if (firstNumber >= secondNumber)
    {
        cout << firstNumber << " is greater than or equal to " << secondNumber << endl;
    }
    else
    {
        cout << firstNumber << " is less than " << secondNumber << endl;
    }

    return 0;
}