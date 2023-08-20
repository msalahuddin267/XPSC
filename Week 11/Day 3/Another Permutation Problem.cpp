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

        if(n == 1)
        {
            cout << "0\n";
            continue;
        }

        if(n == 2)
        {
            cout << "2\n";
            continue;
        }

        ll run = n - n / 2, x = n / 2, ans = -1;

        while(run--)
        {
            ll sum1 = 0;

            for(int i = 1; i <= x; i++)
            {
                sum1 += i * i;
            }

            ll sum2 = 0, mx = -1, j = n;

            for(int i = x+1; i <= n; i++)
            {
                sum2 += i * j;
                mx = max(mx, i * j);
                j--;
            }

            ll temp = sum1 + sum2 - mx;
            ans = max(ans, temp);
            x++;
        }

        cout << ans << "\n";
    }
}
