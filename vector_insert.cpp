#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {10,20,30,40};
    v.insert(v.begin()+2,100);

    for (int x : v)
    {
        cout<< x <<" ";
    }
    
    
    return 0;
}