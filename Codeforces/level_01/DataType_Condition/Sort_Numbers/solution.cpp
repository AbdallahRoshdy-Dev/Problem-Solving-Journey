#include <iostream>
using namespace std;

int main()
{
    // Input three integers
    int smallestNumber = 0, middleNumber = 0, biggestNumber = 0;
    cin >> smallestNumber >> middleNumber >> biggestNumber;

    // Sorting logic using nested conditionals
    if (smallestNumber <= middleNumber)
        if (smallestNumber <= biggestNumber)
        {
            cout << smallestNumber << endl;
            if (middleNumber <= biggestNumber)
                cout << middleNumber << endl << biggestNumber << endl;
            else
                cout << biggestNumber << endl << middleNumber << endl;
        }
        else
        {
            cout << biggestNumber << endl;
            if (smallestNumber <= middleNumber)
                cout << smallestNumber << endl << middleNumber << endl;
            else
                cout << middleNumber << endl << smallestNumber << endl;
        }
    else if (middleNumber <= biggestNumber)
    {
        cout << middleNumber << endl;
        if (smallestNumber <= biggestNumber)
            cout << smallestNumber << endl << biggestNumber << endl;
        else
            cout << biggestNumber << endl << smallestNumber << endl;
    }
    else
    {
        cout << biggestNumber << endl;
        if (smallestNumber <= middleNumber)
            cout << smallestNumber << endl << middleNumber << endl;
        else
            cout << middleNumber << endl << smallestNumber << endl;
    }

    return 0;
}

#include <iostream>
// We include the "using namespace std;" line to avoid typing "std::" before every standard library element.
using namespace std;

int main()
{
    // --- 1. INPUT ---
    // Declare three integer variables to hold the numbers that will be sorted.
    int number1, number2, number3;

    cout << "Please enter three integers separated by spaces: ";
    // Read the three numbers from the user's input.
    cin >> number1 >> number2 >> number3;

    // --- 2. PRESERVE ORIGINAL VALUES ---
    // Store the initial inputs in separate variables to print them later, unmodified.
    const int originalNumber1 = number1;
    const int originalNumber2 = number2;
    const int originalNumber3 = number3;

    // --- 3. SORTING LOGIC (Bubble Sort variant) ---
    // This sorting method compares pairs of numbers and swaps them if they are in the wrong order.
    // It repeats this process to "bubble" the smallest numbers to the front.

    // First comparison: Ensure number1 is smaller than number2.
    if (number1 > number2)
    {
        // Swap number1 and number2 using the arithmetic method.
        number1 = number1 + number2;
        number2 = number1 - number2;
        number1 = number1 - number2;
    }

    // Second comparison: Ensure number2 is smaller than number3.
    // After this step, the largest number is guaranteed to be in the 'number3' variable.
    if (number2 > number3)
    {
        // Swap number2 and number3.
        number2 = number2 + number3;
        number3 = number2 - number3;
        number2 = number2 - number3;
    }

    // Third comparison: Re-check if number1 is smaller than number2.
    // This final check is necessary because the previous swap might have moved a larger value into 'number2'.
    if (number1 > number2)
    {
        // Swap number1 and number2 again.
        number1 = number1 + number2;
        number2 = number1 - number2;
        number1 = number1 - number2;
    }

    // --- 4. OUTPUT ---
    // Print the results as specified by the flowchart.

    cout << "\n--- Sorted Numbers ---" << endl;
    // Print the variables that now hold the sorted numbers in ascending order.
    cout << number1 << endl;
    cout << number2 << endl;
    cout << number3 << endl;

    // Print a blank line for separation, as per the flowchart.
    cout << endl;

    cout << "--- Original Numbers ---" << endl;
    // Print the original, unmodified numbers that were saved at the beginning.
    cout << originalNumber1 << endl;
    cout << originalNumber2 << endl;
    cout << originalNumber3 << endl;
    
    return 0;
}
