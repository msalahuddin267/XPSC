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
        ll ans = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];

            if(v[i] > 0)
                ans += v[i];
        }

        if(ans == 0)
        {
            cout << "0\n";
            continue;
        }

        if(v[0] < 0)
        {
            if(v[1] > 0)
                ans = max(ans - v[1], ans + v[0]);
        }

        cout << ans << "\n";
    }
}
