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

        vector<queue<int>> v(n+1);
        map<int, int> mp;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j < n; j++)
            {
                int val;
                cin >> val;
                v[i].push(val);
            }
        }

        for(int j = 1; j <= n; j++)
        {
            for(int i = 1; i <= n; i++)
            {
                if(v[i].size())
                    mp[v[i].front()]++;
            }

            int temp;
            for(auto it : mp)
            {
                if(it.second > 1)
                {
                    temp = it.first;
                    cout << temp << " ";
                    break;
                }
            }
            mp.clear();

            for(int i = 1; i <= n; i++)
            {
                if(v[i].size())
                {
                    if(v[i].front() == temp)
                        v[i].pop();
                }
            }
        }
        cout << "\n";
    }
}
