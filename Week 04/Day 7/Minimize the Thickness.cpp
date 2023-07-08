#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n, sum = 0, ans = INT_MAX;
    cin >> n;

    vector<ll> v(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    vector<ll> div;
    for(ll i = 2; i <= sum/2; i++)
    {
        if(sum % i == 0)
            div.push_back(sum/i);
    }

    for(ll i = 0; i < div.size(); i++)
    {
        ll num = div[i];
        ll tot = 0, cnt = 0, len = 0;

        for(ll j = 0; j < n; j++)
        {
            tot += v[j];
            cnt++;

            if(tot > num)
                break;

            if(tot == num)
            {
                len = cnt;
                cnt = 0;
                tot = 0;

                for(ll k = j+1; k < n; k++)
                {
                    tot += v[k];
                    cnt++;

                    if(tot > num)
                    {
                        len = 0;
                        break;
                    }

                    if(tot == num)
                    {
                        len = max(len, cnt);
                        cnt = 0;
                        if(k < n-1)
                            tot = 0;
                    }
                }
                j = n;
                if(tot != num)
                    len = INT_MAX;

                ans = min(ans, len);
            }
        }
    }
    if(ans == INT_MAX)
        cout << n << "\n";
    else
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
