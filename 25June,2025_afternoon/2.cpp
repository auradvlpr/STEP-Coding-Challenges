#include <bits/stdc++.h>
using namespace std;

int majorityElement(const vector<int>& A) {
    int count = 0, candidate = 0;
    for (int x : A) {
        if (count == 0) {
            candidate = x;
            count = 1;
        }
        else if (x == candidate) {
            ++count;
        }
        else {
            --count;
        }
    }
    return candidate;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    cout << majorityElement(A)
         << "\n";
    return 0;
}
