#include <iostream>
using namespace std;

int main()
{
    int number{0};

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Double " << number << " is: " << 2 * number << endl;

    cout << "Triple " << number << " is: " << 3 * number << endl;

    return 0;
}