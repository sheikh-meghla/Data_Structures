#include<bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {

    ll n,q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll>pre(n+1,0);
    pre[1] = arr[0];

    for(ll i = 2; i <= n; i++) {
        pre[i] = pre[i-1] + arr[i-1];
    }
    
    ll l,r;
    
    while (q--)
    {   
        ll sum;
        cin >> l >> r;
        if (l==1)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r]-pre[l-1];
        }
        
        
        cout << sum << "\n";
    }   
    
    return 0;
}