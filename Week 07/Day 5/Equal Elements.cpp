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
        int n, ans = 0;
        cin >> n;

        map<int, int> mp;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        for(auto it : mp)
            ans = max(ans, it.second);

        cout << n - ans << "\n";
    }
}
