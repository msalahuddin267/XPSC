#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, d;
    cin >> n >> d;

    deque<ll> v(n);
    ll ans = 0;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<ll>());

    while(v.size())
    {
        ll x = v.front(), temp = v.front();

        if(x > d)
        {
            ans++;
            v.pop_front();
        }

        else
        {
            while(x <= d && v.size() > 1)
            {
                x += temp;
                v.pop_back();
            }

            if(x > d)
            {
                ans++;
                v.pop_front();
            }

            else
                break;
        }
    }

    cout << ans << "\n";
}

