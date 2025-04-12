#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (a[mid] == target) return mid;  // Found it!

        else {
            if(a[mid] < target) left = mid + 1;  // Search right half

            else right = mid - 1;  // Search left half
        }
    }

    return -1;  // Not found
}

int main()
{

    int n; cin >> n;

    int a[n];

    for( int i = 0; i < n; i++ ) cin >> a[i];

    int target; cin >> target;

    int size = sizeof(a) / sizeof(a[0]);

    int result = binarySearch(a, size, target);

    if (result != -1) cout << "Found at position: " << result << endl;

    else  cout << "Not found" << endl;

    return 0;
}
