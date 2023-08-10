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
        ll cur = 1, ans = 0;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++)
        {
            if(v[i] == cur)
            {
                cur++;
            }
            else if(v[i] > cur)
            {
                ans += v[i] - cur;
                cur++;
            }
        }
        cout << ans << "\n";
    }
}
