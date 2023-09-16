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
        vector<int> ans(n);
        map<int, int> mp;
        bool flag = true;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        for(auto [a, b] : mp)
        {
            if(b < 2)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            for(int i = 0; i < n; i++)
                ans[i] = i + 1;

            for(int i = 0; i < n-1; i++)
            {
                if(v[i] == v[i+1])
                    swap(ans[i], ans[i+1]);
            }

            for(auto it : ans)
                cout << it << " ";
            cout << "\n";
        }

        else
            cout << "-1\n";

    }
}
