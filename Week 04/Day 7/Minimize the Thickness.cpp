#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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

        for(ll i = 0; i < n; i++)
            cin >> v[i];

        for(ll i = 1; i <= n; i++)
            pref[i] = pref[i-1] + v[i-1];

        ll ans = n;
        for(int i = 1; i <= n; i++)
        {
            ll k = i, len = i;
            bool flag = false;
            for(int j = i+1; j <= n; j++)
            {
                if(pref[i] + pref[k] == pref[j])
                {
                    ll dif = j - k;
                    len = max(len, dif);
                    k = j;
                    if(j == n)
                        flag = true;
                }
            }
            if(flag)
                ans = min(ans, len);
        }
        cout << ans << "\n";
    }
}
