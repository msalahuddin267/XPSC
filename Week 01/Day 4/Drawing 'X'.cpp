#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char grid[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j= 0; j < n; j++)
        {
            if(i == n/2 && j == n/2)
                grid[i][j] = 'X';

            else if(i == j)
                grid[i][j] = '\\';

            else if(i+j == n-1)
                grid[i][j] = '//';

            else
                grid[i][j] = '*';
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j= 0; j < n; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }
}
