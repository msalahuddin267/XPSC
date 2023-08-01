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
        ll n, k;
        cin >> n >> k;

        vector<ll> v(n);
        vector<ll> pref(n+1);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n; i++)
            pref[i+1] = v[i] + pref[i];

        while(k--)
        {
            ll l, r, x;
            cin >> l >> r >> x;

            ll total = pref[n] - (pref[r] - pref[l-1]);
            total += (r - l + 1) * x;

            if(total & 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
