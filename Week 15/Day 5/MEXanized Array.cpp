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
        int n, k, x;
        cin >> n >> k >> x;

        if(n < k || x < k-1)
            cout << "-1\n";

        else
        {
            int ans = k * (k + 1) / 2;
            ans -= k;

            if(x == k)
                ans += (n - k) * (x - 1);

            else
                ans += (n - k) * x;

            cout << ans << "\n";
        }
    }
}
