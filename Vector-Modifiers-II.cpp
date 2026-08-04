#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {1,2,3,4,7,3,2,3,4,6};
  
    replace(v.begin()+1,v.end(),3,300);
    for (int x : v)
    {
        cout<< x <<" ";
    }
    
    
    return 0;
}