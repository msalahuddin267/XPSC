#include<bits/stdc++.h>
using namespace std;

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

        map<int, int> mp;
        int mx = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }

        vector<vector<int>> v(mx);

        for(auto it : mp)
        {
            int a = it.second;
            while(a--)
            {
                v[a].push_back(it.first);
            }
        }

        int ans = 0;

        for(int i = 0; i < v.size(); i++)
        {
            int temp = 1;
            for(int j = 0; j < v[i].size()-1; j++)
            {
                if(v[i][j+1] - v[i][j] != 1)
                    temp++;
            }
            ans += temp;
        }

        cout << ans << "\n";
    }
}

