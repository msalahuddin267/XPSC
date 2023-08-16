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

        vector<vector<ll>> v(n);

        for(int i = 0; i < n; i++)
        {
            int sz;
            cin >> sz;

            for(int j = 0; j < sz; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
        }

        for(int i = 0; i < n; i++)
            sort(v[i].begin(), v[i].end());

        vector<ll> fst, sec;

        for(int i = 0; i < n; i++)
        {
            fst.push_back(v[i][0]);
            sec.push_back(v[i][1]);
        }

        ll sum = 0, sml = 1e18;

        for(int i = 0; i < n; i++)
            sum += sec[i];

        for(int i = 0; i < n; i++)
            sml = min(sml, fst[i]);

        ll ans = -1;

        for(int i = 0; i < n; i++)
        {
            ll x = (sum - sec[i]) + sml;
            ans = max(ans, x);
        }

        cout << ans << "\n";
    }
}
