#include <iostream>
using namespace std;

int main()
{
  const int UPPERCASE_TO_LOWERCASE_OFFSET = 32;
  char userInputCharacter = ' ';

  cout << "Enter the character to check:" << endl;
  cin >> userInputCharacter;

  const int asciiValueOfCharacter = int(userInputCharacter);

  // entered characater is small
  if (asciiValueOfCharacter >= 65 && asciiValueOfCharacter <= 90 || asciiValueOfCharacter >= 97 && asciiValueOfCharacter <= 122)
    if (asciiValueOfCharacter >= 65 && asciiValueOfCharacter <= 90)
    {
      cout << char(asciiValueOfCharacter + UPPERCASE_TO_LOWERCASE_OFFSET) << endl;
    }
    // Capital
    else
    {
      cout << char(asciiValueOfCharacter - UPPERCASE_TO_LOWERCASE_OFFSET) << endl;
    }
  else
  {
    cout << "The entered is not characater " << endl;
    return 0;
  }

  return 0;
}