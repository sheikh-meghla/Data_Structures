#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {1,2,3,4,7,3,2,3,4,6,2,100};
  
    // replace(v.begin()+1,v.end()-1,2,300);
    // for (int x : v)
    // {
    //     cout<< x <<" ";
    // }

    auto it = find(v.begin(),v.end(),100);
    if (it == v.end())
    {
        cout << "not fount\n" ;
    }
    else{
        cout << "fount\n";
    }
    
    
    
    return 0;
}