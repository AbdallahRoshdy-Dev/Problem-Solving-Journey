#include <iostream>
using namespace std;

int main()
{
    long long firstFactor1, firstFactor2, secondFactor1, secondFactor2;
    long long firstProduct, secondProduct, differenceResult;

    cout << "Enter first factor 1: ";
    cin >> firstFactor1;

    cout << "Enter first factor 2: ";
    cin >> firstFactor2;

    cout << "Enter second factor 1: ";
    cin >> secondFactor1;

    cout << "Enter second factor 2: ";
    cin >> secondFactor2;

    // Compute the two products
    firstProduct = firstFactor1 * firstFactor2;
    secondProduct = secondFactor1 * secondFactor2;

    // Difference between the two products
    differenceResult = firstProduct - secondProduct;

    cout << "Difference = " << differenceResult << endl;
    return 0;
}