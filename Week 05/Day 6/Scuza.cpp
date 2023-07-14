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
        ll n, q;
        cin >> n >> q;

        vector<ll> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        while(q--)
        {
            ll k, ans = 0;
            cin >> k;

            for(int i = 0; i < n; i++)
            {
                if(v[i] <= k)
                    ans += v[i];
                else
                    break;
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
}
