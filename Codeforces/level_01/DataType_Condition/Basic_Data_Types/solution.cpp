#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int integerValue;
  long long longIntegerValue;
  char characterValue;
  float floatValue;
  double doublePrecisionValue;

  cout << "Enter an integer: ";
  cin >> integerValue;

  cout << "Enter a long long integer: ";
  cin >> longIntegerValue;

  cout << "Enter a character: ";
  cin >> characterValue;

  cout << "Enter a float value: ";
  cin >> floatValue;

  cout << "Enter a double value: ";
  cin >> doublePrecisionValue;

  cout << "Integer: " << integerValue << endl
       << "Long long integer: " << longIntegerValue << endl
       << "Character: " << characterValue << endl
       << "Float: " << floatValue << endl
       << "Double: " << doublePrecisionValue << endl;
  return 0;
}