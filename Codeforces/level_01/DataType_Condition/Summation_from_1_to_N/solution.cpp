#include <iostream>
using namespace std;

int main()
{
    // Input number from user
    int inputNumber;

    cout << "Enter a positive integer: ";
    cin >> inputNumber;

    // Calculate sum of first n natural numbers using formula n*(n+1)/2
    long long sumOfNaturalNumbers = (static_cast<long long>(inputNumber) * (inputNumber + 1)) / 2;

    // Output result with explanation
    cout << "The sum of the first " << inputNumber 
         << " natural numbers is: " << sumOfNaturalNumbers << endl;

    return 0;
}