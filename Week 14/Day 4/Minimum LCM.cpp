#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll LCM(ll a, ll b)
{
    return a * b / __gcd(a, b);
}

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

        vector<ll> div = {1};
        pair<ll, ll> ans;
        ll lcm = LLONG_MAX;

        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                div.push_back(i);
                div.push_back(n / i);
            }
        }

        for(int i = 0; i < div.size(); i++)
        {
            if(LCM(div[i], n - div[i]) < lcm)
            {
                lcm = LCM(div[i], n - div[i]);
                ans.first = div[i];
                ans.second = n - div[i];
            }
        }

        cout << ans.first << " " << ans.second << "\n";
    }
}
