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
        int n;
        cin >> n;

        map<int, vector<int>> mp;

        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }

        if(mp.size() == 1)
        {
            cout << "NO\n";
            continue;
        }

        bool flag = false;
        int idx;

        for(auto [a, b] : mp)
        {
            if(b.size() == 1)
            {
                flag = true;
                idx = b.front();
                break;
            }
        }

        cout << "YES\n";

        vector<vector<int>> ans;

        for(auto [a, b] : mp)
            ans.push_back(b);

        int x = ans[0].front();
        int y = ans.back().front();

        for(int i = 1; i < ans.size(); i++)
        {
            for(int j = 0; j < ans[i].size(); j++)
                cout << x << " " << ans[i][j] << "\n";
        }

        for(int i = 1; i < ans[0].size(); i++)
            cout << y << " " << ans[0][i] << "\n";
    }
}
