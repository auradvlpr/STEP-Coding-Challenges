#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int term1 = 10, term2 = 5;

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            cout << term1 << " ";
            term1 += 50;
        } else {
            cout << term2 << " ";
            term2 += 10;
        }
    }
    return 0;
}
