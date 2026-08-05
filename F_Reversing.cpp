#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    ll n;
    cin >> n;
    vector<ll>v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (ll i = n-1; i >= 0 ; i--)
    {
        cout << v[i]<<" ";
    }
    cout << endl;
    

    return 0;
}
