#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n+1);
    bool pos = true, neg = true, zero = true;

    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if(v[i] < 0 || v[i] > 0)
            zero = false;

        if(v[i] < 0)
            pos = false;

        if(v[i] > 0)
            neg = false;
    }

    if(zero)
        cout << "0\n";

    else if(pos)
    {
        cout << n - 1 << "\n";

        for(int i = 2; i <= n; i++)
            cout << i << " " << i - 1 << "\n";
    }

    else if(neg)
    {
        cout << n - 1 << "\n";

        for(int i = n - 1; i > 0; i--)
            cout << i << " " << i + 1 << "\n";
    }

    else
    {
        int mx = -20, idx = 1;
        for(int i = 1; i <= n; i++)
        {
            if(v[i] > mx)
            {
                mx = v[i];
                idx = i;
            }
        }

        int op = 0;
        vector<pair<int, int>> ans;

        while(v[idx] < 20)
        {
            v[idx] = v[idx] + v[idx];
            ans.push_back({idx, idx});
            op++;
        }

        v[1] = v[1] + v[idx];
        ans.push_back({1, idx});
        op++;

        for(int i = 2; i <= n; i++)
        {
            while(v[i] < v[i-1])
            {
                v[i] = v[i] + v[i-1];
                ans.push_back({i, i-1});
                op++;
            }
        }
        cout << op << "\n";
        for(auto it : ans)
        cout << it.first << " " << it.second << "\n";
    }
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
