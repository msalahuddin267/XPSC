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

        vector<pair<int, int>> v(n);
        vector<int> ans(n);

        for(int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        int x = n;

        for(int i = 0; i < n; i++)
        {
            v[i].first = x;
            x--;
        }

        for(int i = 0; i < n; i++)
            ans[v[i].second] = v[i].first;

        for(int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}
