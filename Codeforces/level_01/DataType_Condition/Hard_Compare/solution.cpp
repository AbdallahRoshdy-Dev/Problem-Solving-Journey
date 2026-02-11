#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Read four numbers: base and exponent for the first, base and exponent for the second
    long long baseFirst, exponentFirst, baseSecond, exponentSecond;
    cin >> baseFirst >> exponentFirst >> baseSecond >> exponentSecond;

    // Variables to store the logarithmic values for comparison
    long double logValueFirst, logValueSecond;

    // Compute B * log(A) for the first number (equivalent to log(A^B))
    logValueFirst = exponentFirst * log(static_cast<long double>(baseFirst));

    // Compute D * log(C) for the second number (equivalent to log(C^D))
    logValueSecond = exponentSecond * log(static_cast<long double>(baseSecond));

    // Compare the two values:
    // If A^B > C^D then logValueFirst > logValueSecond
    if (logValueFirst > logValueSecond)
        cout << "YES" << endl;   // Print YES if the first power is larger
    else
        cout << "NO" << endl;    // Print NO otherwise

    return 0;
}