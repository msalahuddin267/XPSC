#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    string s;

    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> s;

    map<int, set<char>> mp;

    for(int i = 0; i < n; i++)
    {
        mp[a[i]].insert(s[i]);
    }

    for(auto it : mp)
    {
        if(it.second.size() > 1)
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    return;
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
