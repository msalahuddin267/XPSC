#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        vector<ll> v(n);
        vector<ll> pref(n+1);
        ll ans = 1;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n; i++)
            pref[i+1] = pref[i] + v[i];

        for(int i = 1; i < n; i++)
        {
            ll x = __gcd(pref[i], pref[n] - pref[i]);
            ans = max(ans, x);
        }

        cout << ans << "\n";
    }
}
