#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector <int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int counter = 0;
    int target_v;
    for (int i = 0; i < n; i++)
    {   
        target_v = v[i]+1;
        if (find(v.begin(), v.end(), target_v) != v.end()) {
            counter++;
        }
    }
    cout << counter<<" ";
    
    return 0;
}