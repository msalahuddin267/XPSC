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
        pair<ll, ll> a, b, c;

        cin >> a.first >> a.second;
        cin >> b.first >> b.second;
        cin >> c.first >> c.second;

        ll ans = 0;

        if(a.first < b.first && a.first < c.first)
            ans += min(b.first - a.first, c.first - a.first);

        else if(a.first > b.first && a.first > c.first)
            ans += min(a.first - b.first, a.first - c.first);

        if(a.second < b.second && a.second < c.second)
            ans += min(b.second - a.second, c.second - a.second);

        else if(a.second > b.second && a.second > c.second)
            ans += min(a.second - b.second, a.second - c.second);

        cout << ans + 1 << "\n";
    }
}
