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

        vector<pair<ll, pair<ll, ll>>> v(n);

        for(int i = 0; i < n; i++)
        {
            v[i].first = i;
            cin >> v[i].second.first;
        }

        sort(v.begin(), v.end(), [&](pair<ll, pair<ll, ll>> x, pair<ll, pair<ll, ll>> y)
        {
            return x.second.first > y.second.first;
        });

        ll a = -1, b = 1;

        for(int i = 0; i < n; i++)
        {
            if(i & 1)
            {
                v[i].second.second = a;
                a--;
            }
            else
            {
                v[i].second.second = b;
                b++;
            }
        }

        sort(v.begin(), v.end());

        ll ans = 0;

        for(int i = 0; i < n; i++)
        {
            ans += 2 * abs(0 - v[i].second.second) * v[i].second.first;
        }

        cout << ans << "\n";
        cout << "0 ";

        for(auto it : v)
            cout << it.second.second << " ";
        cout << "\n";
    }
}
