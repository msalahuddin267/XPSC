#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000007;

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

        ll ans = 1;

        for(int i = n * 2; i > 2; i--)
        {
            ans = (ans * i) % mod;
        }

        cout << ans << "\n";
    }
}
