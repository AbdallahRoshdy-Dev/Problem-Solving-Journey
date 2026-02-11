#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.141592653;
    double circleRadius, circleArea;

    cout << "Enter circle radius: ";
    cin >> circleRadius;

    // Formula for area of a circle: πr²
    circleArea = PI * circleRadius * circleRadius;

    cout << fixed << setprecision(9) << circleArea << endl;
    return 0;
}