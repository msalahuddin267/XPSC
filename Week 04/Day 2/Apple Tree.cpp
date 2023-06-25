#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> v[200005];
ll leaf[200005];
bool visited[200005];

ll count_leaf(ll src)
{
    visited[src] = true;
    ll ans = 0;
    bool l = true;

    for(int i = 0; i < v[src].size(); i++)
    {
        if(!visited[v[src][i]])
        {
            l = false;
            ans += count_leaf(v[src][i]);
        }
    }
    if(l)
        return leaf[src] = 1;
    else
        return leaf[src] = ans;

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

        ll e = n - 1;

        memset(visited, false, sizeof(visited));
        memset(leaf, 0, sizeof(leaf));

        while(e--)
        {
            ll a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        count_leaf(1);

        ll q;
        cin >> q;

        while(q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << leaf[x] * leaf[y] << "\n";
        }

        for(int i = 1; i <= n; i++)
            v[i].clear();
    }
}
