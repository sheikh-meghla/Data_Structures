#include<bits/stdc++.h>
using namespace std;

void fun(int* &y) {
    cout << y << endl;
    cout << &y << endl;
}

int main() {
    
    int x = 10;

    

    cout << x << endl;

    cout << "x er address : " << &x << endl;

    int * p = &x;
    fun(p);

    cout << x << endl;

    return 0;
}