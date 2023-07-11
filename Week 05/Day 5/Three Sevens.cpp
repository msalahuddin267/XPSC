#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int day;
        cin >> day;

        vector<vector<int>> v(day+1);
        map<int, int> mp;
        vector<int> ans;

        for(int i = 1; i <= day; i++)
        {
            int par;
            cin >> par;

            while(par--)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
                mp[x]++;
            }
        }

        for(int i = 1; i <= day; i++)
        {
            for(int j = 0; j < v[i].size(); j++)
            {
                if(mp[v[i][j]] == 1)
                {
                    ans.push_back(v[i][j]);
                    break;
                }
            }

            for(int j = 0; j < v[i].size(); j++)
            {
                mp[v[i][j]]--;
            }
        }

        if(ans.size() == day)
        {
            for(auto it : ans)
                cout << it << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }
}
