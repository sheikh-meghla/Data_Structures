#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(5);
    v.push_back(50);
    v.push_back(12);

    cout << v.size()<<endl;
    v.clear();
    cout << v.size()<<endl;
    cout << v[1]<<endl;

    return 0;
}