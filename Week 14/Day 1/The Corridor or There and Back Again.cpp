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
        int ans = INT_MAX;

        for(int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second;

        for(int i = 0; i < n; i++)
        {
            if(v[i].second & 1)
                ans = min(ans, v[i].first + v[i].second / 2);
            else
                ans = min(ans, v[i].first + (v[i].second / 2 - 1));
        }

        cout << ans << "\n";
    }
}
