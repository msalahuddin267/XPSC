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

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        string s, temp(n, '1');
        cin >> s;

        if(s == temp)
        {
            for(auto it : v)
                cout << it << " ";
            cout << "\n";
            continue;
        }

        vector<pair<int, pair<int, int>>> ans(n);

        for(int i = 0; i < n; i++)
        {
            ans[i].first = i;
            ans[i].second.first = v[i];
            ans[i].second.second = (s[i] - '0') * -1;
        }

        sort(ans.begin(), ans.end(), [&](pair<int, pair<int, int>> x, pair<int, pair<int, int>> y)
        {
            return x.second.first < y.second.first;
        });

        int p = 1;

        for(int i = 0; i < n; i++)
        {
            if(ans[i].second.second == 0)
            {
                ans[i].second.second = p;
                p++;
            }
        }

        p = n;

        for(int i = n-1; i >= 0; i--)
        {
            if(ans[i].second.second == -1)
            {
                ans[i].second.second = p;
                p--;
            }
        }

        sort(ans.begin(), ans.end());

        for(auto it : ans)
            cout << it.second.second << " ";
        cout << "\n";
    }
}
