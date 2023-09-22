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
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);
        ll ans = 0;

        for(ll i = 0; i < n; i++)
            cin >> v[i];

        ll low = 1, high = INT_MAX;

        while(low <= high)
        {
            ll mid = low + (high - low) / 2;
            ll sum = 0;

            for(int i = 0; i < n; i++)
            {
                if(v[i] < mid)
                sum += mid - v[i];
            }

            if(sum <= x)
            {
                ans = max(ans, mid);
                low = mid + 1;
            }

            else
                high = mid - 1;
        }

        cout << ans << "\n";
    }
}
