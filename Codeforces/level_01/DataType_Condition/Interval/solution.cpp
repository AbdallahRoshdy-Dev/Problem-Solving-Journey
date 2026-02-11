#include <iostream>
using namespace std;

int main()
{
    // Interval boundaries
    const int lowerBoundIntervalOne = 0;
    const int upperBoundIntervalOne = 25;
    const int upperBoundIntervalTwo = 50;
    const int upperBoundIntervalThree = 75;
    const int upperBoundIntervalFour = 100;

    // Input number
    float inputValue = 0;
    cout << "Enter a number to check which interval it belongs to: ";
    cin >> inputValue;

    // Check intervals
    if (inputValue >= lowerBoundIntervalOne && inputValue <= upperBoundIntervalOne)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if (inputValue > upperBoundIntervalOne && inputValue <= upperBoundIntervalTwo)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if (inputValue > upperBoundIntervalTwo && inputValue <= upperBoundIntervalThree)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if (inputValue > upperBoundIntervalThree && inputValue <= upperBoundIntervalFour)
    {
        cout << "Interval (75,100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }

    return 0;
}