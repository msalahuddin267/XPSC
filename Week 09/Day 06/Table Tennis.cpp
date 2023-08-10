#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    deque<ll> d(n);

    for(int i = 0; i < n; i++)
        cin >> d[i];

    ll cnt = 0, mx = d.front();
    d.pop_front();

    while(1)
    {
        if(mx == n)
        {
            cout << mx << "\n";
            break;
        }

        if(cnt == k)
        {
            cout << mx << "\n";
            break;
        }

        ll x = d.front();
        d.pop_front();

        if(mx > x)
        {
            cnt++;
            d.push_back(x);

        }
        else
        {
            cnt = 1;
            d.push_back(mx);
            mx = x;
        }
    }
}
