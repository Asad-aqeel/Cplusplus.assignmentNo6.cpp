#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Using while loop. ";
    cout << endl;

    int i = 1;
    int j = 1;
    while (i <= 6)
    {
        j = 1;
        while (j <= 6)
        {
            cout << i * j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    cout << endl;
    cout << "Using  do-while loop. ";
    cout << endl;

    i = 1;
    do
    {
        j = 1;
        do
        {
            cout << i * j << " ";
            j++;
        } while (j <= 6);
        cout << endl;
        i++;
    } while (i <= 6);

    return 0;
}
