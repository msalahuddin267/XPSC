#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    for(int i = 0; i < n; i++)
        cin >> grid[i];

    for(int i = 0; i < n; i++)
    {
        int cnt = 0;

        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == 'U' || grid[i][j] == 'D')
                cnt++;
        }

        if(cnt & 1)
        {
            cout << "-1\n";;
            return;
        }
    }

    for(int i = 0; i < m; i++)
    {
        int cnt = 0;

        for(int j = 0; j < n; j++)
        {
            if(grid[j][i] == 'L' || grid[j][i] == 'R')
                cnt++;
        }

        if(cnt & 1)
        {
            cout << "-1\n";;
            return;
        }
    }

    vector<string> ans = grid;
    vector<vector<bool>> vis(n, vector<bool>(m));

    for(int i = 0; i < n; i++)
    {
        int flag = 0;

        for(int j = 0; j < m; j++)
        {
            if(vis[i][j])
                continue;

            if(grid[i][j] == 'U')
            {
                vis[i][j] = true;
                vis[i+1][j] = true;

                if(flag)
                {
                    ans[i][j] = 'B';
                    ans[i+1][j] = 'W';
                }

                else
                {
                    ans[i][j] = 'W';
                    ans[i+1][j] = 'B';
                }

                flag ^= 1;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        int flag = 0;

        for(int j = 0; j < n; j++)
        {
            if(vis[j][i])
                continue;

            if(grid[j][i] == 'L')
            {
                vis[j][i] = true;
                vis[j][i+1] = true;

                if(flag)
                {
                    ans[j][i] = 'B';
                    ans[j][i+1] = 'W';
                }

                else
                {
                    ans[j][i] = 'W';
                    ans[j][i+1] = 'B';
                }

                flag ^= 1;
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << ans[i] << "\n";
    cout << "\n";
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
