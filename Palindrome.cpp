#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    optimize();

    string s; cin >> s;
    string rev = s;

    reverse( rev.begin(), rev.end() );

    if( s == rev ) cout << "Palindrome" << endl;
    else cout << "NOT Palindrome" << endl;

    return 0;
}
