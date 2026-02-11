#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // Input number
  float inputNumber;

  cout << "Enter a number to check whether it is an integer or a float: ";
  cin >> inputNumber;

  // Extract integer and fractional parts
  const int integerPart = static_cast<int>(inputNumber);
  const float fractionalPart = inputNumber - integerPart;

  // Check if number is an integer or float
  if (fractionalPart)
  {
    cout << "float " << integerPart << " " << setprecision(3) << fractionalPart;
  }
  else
  {
    cout << "int " << integerPart;
  }

  return 0;
}