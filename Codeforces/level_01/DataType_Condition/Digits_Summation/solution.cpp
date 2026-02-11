#include <iostream>
using namespace std;

int main()
{
    // Input numbers
    long long inputNumber1, inputNumber2;

    // Last digits of each number
    int lastDigitOfInput1, lastDigitOfInput2;

    // Sum of last digits
    int sumOfLastDigits;

    // Prompt messages for clarity
    cout << "Enter the first number: ";
    cin >> inputNumber1;

    cout << "Enter the second number: ";
    cin >> inputNumber2;

    // Extract last digits using modulus operator
    lastDigitOfInput1 = inputNumber1 % 10;
    lastDigitOfInput2 = inputNumber2 % 10;

    // Compute sum of last digits
    sumOfLastDigits = lastDigitOfInput1 + lastDigitOfInput2;

    // Output result with explanation
    cout << "The sum of the last digits is: " << sumOfLastDigits << endl;

    return 0;
}