#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const long long mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, k, ans = 1;
        cin >> n >> k;

        if(n >= k)
        {
            for(int i = 1; i <= k; i++)
                ans = (ans * i) % mod;
        }
        else
        {
            for(int i = k; i > k-n; i--)
                ans = (ans * i) % mod;
        }

        cout << ans << "\n";
    }
}
