#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, thirdNumber;
    cin >> firstNumber >> secondNumber >> thirdNumber;

    // get min
    if (firstNumber <= secondNumber)
        if (firstNumber <= thirdNumber)
            cout << firstNumber << ' ';
        else
            cout << thirdNumber << ' ';
    else if (secondNumber <= thirdNumber)
        cout << secondNumber << ' ';
    else
        cout << thirdNumber << ' ';

    // get max
    if (firstNumber >= secondNumber)
        if (firstNumber >= thirdNumber)
            cout << firstNumber;
        else
            cout << thirdNumber;
    else if (secondNumber >= thirdNumber)
        cout << secondNumber;
    else
        cout << thirdNumber;

// ========================================================
  // get min
  if (firstNumber <= secondNumber)
    cout << ((firstNumber <= thirdNumber) ? firstNumber : thirdNumber);
  else
    cout << ((secondNumber <= thirdNumber) ? secondNumber : thirdNumber);

  // Separator
  cout << ' ';

  // get max
  if (firstNumber >= secondNumber)
    cout << ((firstNumber >= thirdNumber) ? firstNumber : thirdNumber);
  else
    cout << ((secondNumber >= thirdNumber) ? secondNumber : thirdNumber);
    return 0;
}