#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int m = 100;

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

        vector<vector<int>> v(m, vector<int> (n));
        map<int, int> mp;

        for(int i = 0; i < n; i++)
        {
            cin >> v[0][i];
            mp[v[0][i]]++;
        }

        for(int i = 1; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int x = v[i-1][j];
                v[i][j] = mp[x];
            }

            mp.clear();

            for(int k = 0; k < n; k++)
                mp[v[i][k]]++;
        }

        int q;
        cin >> q;

        while(q--)
        {
            int idx, op;
            cin >> idx >> op;

            if(op < m)
                cout << v[op][idx-1] << "\n";
            else
                cout << v[m-1][idx-1] << "\n";
        }
    }
}
