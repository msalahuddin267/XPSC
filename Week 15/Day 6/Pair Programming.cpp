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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> mon(n), pol(m);
        vector<int> ans;

        for(int i = 0; i < n; i++)
            cin >> mon[i];

        for(int i = 0; i < m; i++)
            cin >> pol[i];

        int i = 0, j = 0;
        bool flag = true;

        while(i < n || j < m)
        {
            if((i < n) && (mon[i] == 0))
            {
                ans.push_back(0);
                k++;
                i++;
            }

            else if((j < m) && (pol[j] == 0))
            {
                ans.push_back(0);
                k++;
                j++;
            }

            else if((i < n) && (mon[i] <= k))
            {
                ans.push_back(mon[i]);
                i++;
            }

            else if((j < m) && (pol[j] <= k))
            {
                ans.push_back(pol[j]);
                j++;
            }

            else
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            for(auto it : ans)
                cout << it << " ";
            cout << "\n";
        }

        else
            cout << "-1\n";
    }
}
