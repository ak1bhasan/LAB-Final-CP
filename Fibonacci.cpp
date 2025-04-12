#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int f( int n )
{
    if( n == 0 )
    {
        return 1;
    }
    else return n * f ( n -1 );
}

int main()
{
    optimize();

    int n;
    cin >> n;
    cout << f( n ) << endl;

    return 0;
}
