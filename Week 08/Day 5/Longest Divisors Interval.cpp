#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, ans = 0;
    cin >> n;

    for (ll i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ans++;
        }
        else
            break;
    }

    cout << ans << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
