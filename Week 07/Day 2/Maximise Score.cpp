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

        vector<int> v(n+1);
        for(int i = 1; i <= n; i++)
            cin >> v[i];

        int ans = INT_MAX;
        for(int i = 1; i <= n; i++)
        {
            if(i == 1)
            {
                ans = min(ans, abs(v[i] - v[i+1]));
            }
            else if(i == n)
            {
                ans = min(ans, abs(v[i] - v[i-1]));
            }

            else
            {
               ans = min(ans, max(abs(v[i] - v[i-1]), abs(v[i] - v[i+1])));
            }
        }

        cout << ans << "\n";
    }
}
