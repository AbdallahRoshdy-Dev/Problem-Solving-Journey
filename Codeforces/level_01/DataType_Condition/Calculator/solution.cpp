#include <iostream>
using namespace std;

int main()
{
    // Input operands and operator
    int firstOperand = 0, secondOperand = 0;
    char operationSymbol = ' ';

    cout << "Enter the operands and operator like this A(+|-|*|/)B:" << endl;
    cin >> firstOperand >> operationSymbol >> secondOperand;

    // Result of the operation
    int result = 0;

    // Perform calculation based on operator
    if (operationSymbol == '+')
    {
        result = firstOperand + secondOperand;
        cout << result << endl;
    }
    else if (operationSymbol == '-')
    {
        result = firstOperand - secondOperand;
        cout << result << endl;
    }
    else if (operationSymbol == '*')
    {
        result = firstOperand * secondOperand;
        cout << result << endl;
    }
    else if (operationSymbol == '/')
    {
        result = firstOperand / secondOperand;
        cout << result << endl;
    }
    else
    {
        cout << "Invalid operator" << endl;
    }

    return 0;
}