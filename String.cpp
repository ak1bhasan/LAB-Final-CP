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

