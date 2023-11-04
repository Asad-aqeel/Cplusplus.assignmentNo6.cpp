#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;

    cout << "Enter the value of N: ";
    cin >> N;

    if (N <= 0)
    {
        cout << "N should be a positive integer." << endl;
        return 1;
    }

    int count = 0;
    int num = 2;

    cout << "First " << N << " prime numbers are: ";
    while (count < N)
    {
        if (isPrime(num))
        {
            cout << num << " ";
            count++;
        }
        num++;
    }

    cout << endl;

    return 0;
}
