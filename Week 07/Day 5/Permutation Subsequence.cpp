#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, ans = 0;
        cin >> n;

        map<ll, ll> mp;

        for(int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }

        if(mp[1] == 0)
            cout << ans << "\n";

        else
        {
            ll prev = 1;
            for(int i = 1; i <= mp.size(); i++)
            {
                if(mp[i] != 0)
                {
                    ll temp = (mp[i] * prev) % mod;
                    ans += temp;
                    prev = temp;
                    ans = ans % mod;
                }
                else
                    break;
            }
            cout << ans << "\n";
        }
    }
}
