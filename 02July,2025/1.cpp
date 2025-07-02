#include <iostream>
using namespace std;

string func(int n, int m){
    if(n%10 == m%10){
        return "yes";
    }
    return "no";
}

int main() {
    int a, b;
    cin>>a>>b;
    string res = func(a, b);
    cout<<res;

    return 0;
}
