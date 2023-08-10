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

        vector<int> v(n*(n-1)/2);
        vector<int> ans;

        for(int i = 0; i < v.size(); i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int run = n - 1, cnt = 0, mn = INT_MAX;

        for(int i = 0; i < v.size(); i++)
        {
            mn = min(v[i], mn);
            cnt++;

            if(cnt == run)
            {
                run--;
                cnt = 0;
                ans.push_back(mn);
                mn = INT_MAX;
            }
        }

        ans.push_back(1e9);

        for(auto it : ans)
            cout << it << " ";
        cout << "\n";
    }
}
