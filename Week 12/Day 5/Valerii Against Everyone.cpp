#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for(auto [a, b] : mp)
    {
        if(b > 1)
        {
            cout << "YES\n";
            return;
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
