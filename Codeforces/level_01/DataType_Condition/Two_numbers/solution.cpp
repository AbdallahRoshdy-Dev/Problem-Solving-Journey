#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Input values
    float dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    // Perform division
    float divisionResult = dividend / divisor;

    // Output results with floor, ceil, and round
    cout << "floor(" << dividend << " / " << divisor << ") = " << floor(divisionResult) << endl
         << "ceil(" << dividend << " / " << divisor << ") = " << ceil(divisionResult) << endl
         << "round(" << dividend << " / " << divisor << ") = " << round(divisionResult) << endl;

    return 0;
}