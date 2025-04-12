#include<bits/stdc++.h>
using namespace std;

int f( int n )
{
    if( n == 0 ) return 1;
    else {
        return n *f(n-1);
    }
}
int Fibonacci( int n )
{
    if( n == 0 ) return 0;
    if( n == 1 ) return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    int n; cin >> n;
    cout << "Factorial: " << f(n) << endl;
    cout << "Fibonacci: " << Fibonacci(n) << endl;
}
