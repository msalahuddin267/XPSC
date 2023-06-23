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
        ll n, mx = 0;
        cin >> n;

        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] & 1)
                a[i]--;
        }

        map<ll, ll> mp;
        for(int i = 0; i < n; i++)
        {
            ll ans = 0;
            while(a[i] > 1)
            {
                ans++;
                a[i] /= 2;
            }
            mp[ans]++;
            mx = max(mx, ans);
        }
        ll final_ans = ceil(mp[mx] * 1.0 / 2);
        cout << final_ans << "\n";

    }
}





