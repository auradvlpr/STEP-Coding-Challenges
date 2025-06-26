#include <iostream>
using namespace std;

int getRate(long long c) {
    if (c <= 10) return 10;
    else if (c <= 230) return 5;
    else if (c <= 559) return 8;
    else if (c <= 1009) return 2;
    else if (c <= 5000) return 7;
    else if (c <= 10000) return 8;
    else return 3;
}

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        long long S, T;
        cin >> S >> T;

        int time = 0;
        while (S < T) {
            S += getRate(S);
            time++;
        }
        cout << time << endl;
    }

    return 0;
}
