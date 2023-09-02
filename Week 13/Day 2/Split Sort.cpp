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
        int n, ans = 0;
        cin >> n;

        map<int, int> mp;

        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x] = i;
        }

        for(int i = 1; i < n; i++)
        {
            if(mp[i] > mp[i+1])
                ans++;
        }
        cout << ans << "\n";
    }
}
