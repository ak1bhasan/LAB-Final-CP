#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "AEAEEA";
    int count = 0;

    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'A' && s[i + 1] == 'E') {
            count++;
        }
    }

    cout << "\"AE\" occurs " << count << " times." << endl;

    return 0;
}




/**
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s); // read the whole line

    for (auto u : s) {
        if (u == '\\') break; // stop at the first backslash
        cout << u;
    }

    cout << endl;
    return 0;
}
*/




/**
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    optimize();

    int t;
    cin >> t;
    while( t-- )
    {
        string s;
        cin >> s;
        s.resize( s.size() - 2 );
        s += 'i';
        cout << s << endl;
    }

    return 0;
}
*/
