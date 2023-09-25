#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> v(n+1);

    for(int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        v[i] = v[i-1] + x;
    }

    ll q;
    cin >> q;

    while(q--)
    {
        ll x;
        cin >> x;

        auto it = lower_bound(v.begin(), v.end(), x);

        cout << it - v.begin() << "\n";
    }
}
