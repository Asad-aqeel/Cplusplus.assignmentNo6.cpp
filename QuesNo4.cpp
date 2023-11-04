#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int sum = 0;
    int originalnumber = number;
    while (number > 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "The sum of digits in " << originalnumber << " is " << sum <<"." << endl;

    return 0;
}
