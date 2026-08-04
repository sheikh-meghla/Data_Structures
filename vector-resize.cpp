#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v;

    v.push_back(5);
    v.push_back(50);
    v.push_back(12);
    v.resize(6,20);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i]<< " ";
    }

    return 0;
}