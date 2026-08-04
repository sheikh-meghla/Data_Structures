#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {10,20,30,40};
    vector<int> v2;
    v2 = v;
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    // or

    for (int x : v2)
    {
        cout<< x <<" ";
    }
    
    
    return 0;
}