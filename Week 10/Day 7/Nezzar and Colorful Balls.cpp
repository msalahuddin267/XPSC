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

        map<int, int> mp;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        for(auto it : mp)
            ans = max(ans, it.second);

        cout << ans << "\n";
    }
}
