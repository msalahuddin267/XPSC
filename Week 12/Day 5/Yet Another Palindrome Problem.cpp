#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    for(int i = 0; i < n; i++)
    {
        if(mp[v[i]] > 1)
        {
            for(int j = i + 2; j < n; j++)
            {
                if(v[j] == v[i])
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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
