#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, one = 0;
    cin >> n;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            one++;
    }

    for(int i = 0; i < n; i++)
        cin >> b[i];

    if(a[0] != b[0] || a[n-1] != b[n-1])
    {
        cout << "NO\n";
        return;
    }

    for(int i = 1; i < n-1; i++)
    {
        if(a[i] == b[i])
            continue;

        if(a[i] == 1)
        {
            cout << "NO\n";
            return;
        }

        if(one == 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
