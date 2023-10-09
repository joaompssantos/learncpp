#include <iostream>
using namespace std;

int doubleNumber(int num)
{
    return 2 * num;
}

int main()
{
    int num{};

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Double " << num << " is: " << doubleNumber(num) << "." << endl;

    return 0;
}