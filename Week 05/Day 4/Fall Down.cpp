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
        int n, m;
        cin >> n >> m;

        char grid[n][m];

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        for(int i = n-2; i >= 0; i--)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == '*')
                {
                    int a = i, b = j;
                    while(a+1 < n && grid[a+1][b] == '.')
                    {
                        swap(grid[a][b], grid[a+1][b]);
                        a++;
                    }
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
}

