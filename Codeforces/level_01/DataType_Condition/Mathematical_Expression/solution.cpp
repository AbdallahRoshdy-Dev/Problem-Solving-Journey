#include <iostream>
using namespace std;

int main()
{
  // Input operands, operator, assignment symbol, and user-provided result
  int leftOperand, rightOperand, userProvidedResult;
  char operationSymbol = ' ', assignmentSymbol = ' ';

  cout << "Enter an arithmetic expression in the form A op B = C" << endl;
  cout << "Example: 3 + 4 = 7" << endl;
  cout << "Now enter your expression: ";

  cin >> leftOperand >> operationSymbol >> rightOperand >> assignmentSymbol >> userProvidedResult;

  // Check if assignment symbol is '='
  if (assignmentSymbol == '=')
  {
    int expectedResult = 0;

    switch (operationSymbol)
    {
    case '+':
      expectedResult = leftOperand + rightOperand;
      if (expectedResult == userProvidedResult)
        cout << "Yes" << endl;
      else
        cout << "Correct result is: " << expectedResult << endl;
      break;

    case '-':
      expectedResult = leftOperand - rightOperand;
      if (expectedResult == userProvidedResult)
        cout << "Yes" << endl;
      else
        cout << "Correct result is: " << expectedResult << endl;
      break;

    case '*':
      expectedResult = leftOperand * rightOperand;
      if (expectedResult == userProvidedResult)
        cout << "Yes" << endl;
      else
        cout << "Correct result is: " << expectedResult << endl;
      break;

    default:
      cout << "Invalid operator. Please use +, -, or *." << endl;
      break;
    }
  }
  else
  {
    cout << "Error: You must use '=' as the assignment symbol." << endl;
  }

  return 0;
}