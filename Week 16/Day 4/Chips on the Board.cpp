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

        vector<ll> a(n), b(n);
        ll sum_a = 0, sum_b = 0;
        ll mn_a = LLONG_MAX, mn_b = LLONG_MAX;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_a += a[i];
            mn_a = min(mn_a, a[i]);
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            sum_b += b[i];
            mn_b = min(mn_b, b[i]);
        }

        cout << min(mn_a * n + sum_b, mn_b * n + sum_a) << "\n";
    }
}
