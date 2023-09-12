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
        int ans = -1;

        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x] = i;
        }

        for(int i = 1; i <= 1000; i++)
        {
            for(int j = 1; j <= 1000; j++)
            {
                if(__gcd(i, j) == 1)
                {
                    if(mp.find(i) != mp.end() && mp.find(j) != mp.end())
                        ans = max(ans, mp[i] + mp[j]);
                }
            }
        }

        cout << ans << "\n";
    }
}
