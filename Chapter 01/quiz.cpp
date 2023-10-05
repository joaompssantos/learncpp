#include <iostream>
using namespace std;

int main()
{
    int firstnumber{};
    int secondnumber{};

    cout << "Enter an integer: ";
    cin >> firstnumber;

    cout << "Enter another integer: ";
    cin >> secondnumber;

    cout << firstnumber << " + " << secondnumber << " is " << firstnumber + secondnumber << "." << endl;

    cout << firstnumber << " - " << secondnumber << " is " << firstnumber - secondnumber << "." << endl;

    return 0;
}