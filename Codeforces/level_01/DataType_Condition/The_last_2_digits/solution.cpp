#include <iostream>
using namespace std;

int main()
{
  // --- 1. DEFINE CONSTANTS (Not used in current logic, but good practice) ---
  // These constants were in the original code but aren't currently used for validation.
  // They could be used later to check if the input numbers are within a specific range.
  const int MINIMUM_INPUT_VALUE = 2;
  const int MAXIMUM_INPUT_VALUE = 1000000000;

  // --- 2. GET USER INPUT ---
  // Declare four integer variables to serve as factors for the multiplication.
  int firstFactor, secondFactor, thirdFactor, fourthFactor;

  // Prompt the user with clear instructions on how to enter the numbers.
  cout << "Enter four integer numbers (A, B, C, D) separated by spaces: ";

  // Read the four integer values from the user's input and store them.
  cin >> firstFactor >> secondFactor >> thirdFactor >> fourthFactor;

  // --- 3. PERFORM CALCULATION ---

  // Calculate the product of the four input numbers.
  // We use 'long long' for the result variable to prevent potential "integer overflow".
  // An integer overflow can happen if the result of the multiplication is larger than
  // the maximum value a standard 'int' can hold, leading to incorrect results.
  // 'long long' provides a much larger range.
  const long long totalProduct = static_cast<long long>(firstFactor) * secondFactor * thirdFactor * fourthFactor;

    int x = ((__int128)A * B * C * D) % 100;
  cout << setw(2) << setfill('0') << x << endl;

  if(x<=9>)
  cout<<'0'<<x<<endl;
  else 
  cout<<x<<endl;

  // To find the last two digits of any integer, we use the modulo operator (%) with 100.
  // The modulo operator gives the remainder of a division. For example, 345 % 100 = 45.
  const int lastTwoDigitsOfProduct = totalProduct % 100;

  // --- 4. DISPLAY THE RESULT ---

  // Print the final calculated last two digits to the console.
  // We use 'abs()' to ensure the output is positive, which is common when asking for "digits".
  // For example, if the product is -123, the remainder is -23. abs(-23) gives 23.
  
  // cout << "The last two digits of the product are: " << abs(lastTwoDigitsOfProduct) << endl;

  cout << "The last tow digits is " << lastTwoDigitsOfProduct << endl;
  return 0;
}
