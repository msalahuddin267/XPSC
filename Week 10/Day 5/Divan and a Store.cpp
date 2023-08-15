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
        int n, l, r, k;
        cin >> n >> l >> r >> k;

        vector<int> v(n);
        int ans = 0;

        for(int i = 0; i < n; i++)
        cin >> v[i];

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++)
        {
            if(v[i] >= l && v[i] <= r && v[i] <= k)
            {
                ans++;
                k -= v[i];
            }
        }
        cout << ans << "\n";
    }
}
