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

        vector<ll> a(n), b(n+1);
        vector<ll> pref(n+1), suf(n+2);
        ll ans = 1;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 1; i <= n; i++)
            cin >> b[i];

        for(int i = 0; i < n; i++)
            pref[i+1] = __gcd(pref[i], a[i]);

        for(int i = n-1; i >= 0; i--)
            suf[i+1] = __gcd(suf[i+2], a[i]);

        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
                ans = max(ans, __gcd(b[i], suf[i+1]));

            else if(i == n)
                ans = max(ans, __gcd(b[i], pref[i-1]));

            else
            {
                ll x = __gcd(pref[i-1], b[i]);
                ans = max(ans, __gcd(x, suf[i+1]));
            }
        }

        ans = max(ans, pref[n]);

        cout << ans << "\n";
    }
}
