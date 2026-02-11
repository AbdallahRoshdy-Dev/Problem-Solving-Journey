#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Input operands and comparison symbol
    int leftOperand, rightOperand;
    char comparisonSymbol = ' ';

    cout << "Enter a first number, comparison operator, and second number: ";
    cin >> leftOperand >> comparisonSymbol >> rightOperand;

    // Evaluate based on comparison symbol
    switch (comparisonSymbol)
    {
    case '>':
        if (leftOperand > rightOperand)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;

    case '<':
        if (leftOperand < rightOperand)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;

    case '=':
        if (leftOperand == rightOperand)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
        break;

    default:
        cout << "Invalid operator" << endl;
        break;
    }

    return 0;
}