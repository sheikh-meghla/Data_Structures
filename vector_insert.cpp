#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {10,20,30,40};
    // v.insert(v.begin()+2,100);
    vector<int> v2 = {1,80,120,70};
    
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    v.erase(v.begin()+2);
    for (int x : v)
    {
        cout<< x <<" ";
    }
    
    
    return 0;
}