#include <iostream>
using namespace std;

int main()
{
  // Allowed range for input
  const int minimumAllowedValue = 999;
  const int maximumAllowedValue = 9999;

  // Input number
  int enteredNumber = 0;

  cout << "Enter the number to check:" << endl;
  cin >> enteredNumber;

  // Check if number is within allowed range
  if (minimumAllowedValue < enteredNumber <= maximumAllowedValue)
  {
    // Extract the leading digit
    const int leadingDigit = enteredNumber / 1000;

    // Check if leading digit is even or odd
    if (leadingDigit % 2 == 0)
    {
      cout << "EVEN" << endl;
    }
    else
    {
      cout << "ODD" << endl;
    }
  }
  else
  {
    cout << "The number is not in the allowed range." << endl;
  }

  return 0;
}
