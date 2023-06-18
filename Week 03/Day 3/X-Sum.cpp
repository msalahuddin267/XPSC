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
        int n, m, ans = 0;
        cin >> n >> m;

        int grid[n][m];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int sum = grid[i][j];

                int r = i, c = j;
                if(r+1 < n && c+1 < m)
                {
                    while(r+1 < n && c+1 < m)
                    {
                        sum += grid[r+1][c+1];
                        r++;
                        c++;
                    }
                }

                r = i, c = j;
                if(r-1 >= 0 && c-1 >= 0)
                {
                    while(r-1 >= 0 && c-1 >= 0)
                    {
                        sum += grid[r-1][c-1];
                        r--;
                        c--;
                    }
                }

                r = i, c = j;
                if(r-1 >= 0 && c+1 < m)
                {
                    while(r-1 >= 0 && c+1 < m)
                    {
                        sum += grid[r-1][c+1];
                        r--;
                        c++;
                    }
                }

                r = i, c = j;
                if(r+1 < n && c-1 >= 0)
                {
                    while(r+1 < n && c-1 >= 0)
                    {
                        sum += grid[r+1][c-1];
                        r++;
                        c--;
                    }
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << "\n";
    }
}

