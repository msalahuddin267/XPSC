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

        map<ll, ll> mp;
        ll sum = 0;

        for(int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            sum += x;
        }

        if(mp[1] == 0)
        {
            cout << "0\n";
            continue;
        }

        if(sum == 1)
        {
            cout << (1LL << mp[0]) << "\n";
            continue;
        }

        ll zero = (1LL << mp[0]), one = mp[1];
        cout << zero * one << "\n";
    }
}
