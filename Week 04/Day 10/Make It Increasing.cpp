#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans = 0;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = n-2; i >= 0; i--)
    {
        while(v[i] >= v[i+1] && v[i] > 0)
        {
            v[i] /= 2;
            ans++;
        }

        if(v[i] >= v[i+1])
        {
            cout << "-1\n";
            return;
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
