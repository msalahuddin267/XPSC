#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    if(n == 1)
    {
        cout << "1\n";
        return;
    }

    ll cont = 0;

    for(int i = 0; i < n-1; i++)
    {
        cont += abs(v[i] - v[i+1]);
    }

    if(cont == 0)
    {
        cout << "1\n";
        return;
    }

    if(n == 2)
    {
        cout << "2\n";
        return;
    }

    ll ans = n;

    for(int i = 1; i < n-1; i++)
    {
        if(v[i] == v[i-1] || v[i] == v[i+1])
        {
            swap(v[i], v[i-1]);
            ans--;
        }
        else if(v[i] < v[i-1] && v[i] > v[i+1])
        {
            swap(v[i], v[i-1]);
            ans--;
        }
        else if(v[i] > v[i-1] && v[i] < v[i+1])
        {
            swap(v[i], v[i-1]);
            ans--;
        }
    }
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

