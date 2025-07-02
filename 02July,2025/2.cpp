#include<iostream>
using namespace std;

string dorf(int a, int b, int c){
    int discount = (0.2*a + 0.2*b + 0.2*c);
    int free = 0;
    if(a<b && a<c){
        free = b+c;
    }
    else if(b<a && b<c){
        free = a+c;
    }
    else if(c<b && c<a){
        free = a+b;
    }

    if(free < discount){
        return "FREE ITEM";
    }
    else{
        return "DISCOUNT";
    }
}

int main(){
    int x, y, z;
    cin>>x>>y>>z;
    string res = dorf(x, y, z);
    cout<<res<<endl;
    return 0;
}
