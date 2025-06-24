// 6. Display the number of odd and even numbers from the array

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int countOdd = 0, countEven = 0;
    for (int x : arr) {
        if (x % 2 == 0)
            ++countEven;
        else
            ++countOdd;
    }
    cout << "Even numbers: " << countEven << "\n";
    cout << "Odd numbers: " << countOdd << "\n";
    return 0;
}
