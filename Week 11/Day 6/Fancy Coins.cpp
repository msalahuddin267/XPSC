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
        ll m, k, a1, ak;
        cin >> m >> k >> a1 >> ak;

        if(m - k * ak <= 0)
        {
            m %= k;
            cout << max(0ll, m - a1) << "\n";
            continue;
        }

        m -= k * ak;

        if(a1 >= m)
        {
            cout << "0\n";
            continue;
        }

        ll ans = (m - a1) / k + (m - a1) % k;

        if(a1 >= m % k)
            ans = min(ans, ((m - a1) + k - 1) / k);

        cout << ans << "\n";
    }
}
