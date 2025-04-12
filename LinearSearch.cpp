#include <iostream>
using namespace std;

int linearSearch(int a[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(a[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int size, target;
    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];

    cout << "Enter " << size << " elements: ";
    for( int i = 0; i < size; i++ ) cin >> a[i];

    cout << "Enter the element to Search: ";
    cin >> target;

    int result = linearSearch(a, size, target);

    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
