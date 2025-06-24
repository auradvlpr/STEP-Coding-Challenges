// 1. Accept n and store n elements in a 1D array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Stored array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
