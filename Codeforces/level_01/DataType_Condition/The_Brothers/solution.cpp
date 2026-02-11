 #include <iostream>
using namespace std;

int main()
{
    // Input names for two people
    string firstPersonFirstName, firstPersonLastName;
    string secondPersonFirstName, secondPersonLastName;

    cin >> firstPersonFirstName >> firstPersonLastName;
    cin >> secondPersonFirstName >> secondPersonLastName;

    // Compare last names to check if they are "brothers"
    if (firstPersonLastName == secondPersonLastName)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }

    return 0;
}
