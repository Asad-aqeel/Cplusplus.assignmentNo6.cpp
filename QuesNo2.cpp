#include <iostream>
using namespace std;

int main()
{
    int age, obligatorynamazyears,totalprayers;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 7)
    {
        cout << "You were not obligated to pray Namaz in your first 7 years." << endl;
        return 0;
    }

    obligatorynamazyears = age - 7;
    totalprayers = obligatorynamazyears * 365 * 5;

    cout << "Obligatory namaz years are: " << obligatorynamazyears << "." << endl;
    cout << "You had to pray " << totalprayers << " Salats in your " << obligatorynamazyears << " years." << endl;

    return 0;
}
