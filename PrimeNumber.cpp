#include <iostream>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"

bool isPrime(int num)
{
    if (num <= 1) return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) return false;
    }

    return true;
}

int main()
{

    int number;

    cout << "Enter a positive integer: ";

    cin >> number;

    if(isPrime(number))
    {
        cout << number << " is a prime number." << endl;
    }

    else
    {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
