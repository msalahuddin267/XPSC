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
        int mx = INT_MIN, ans = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        for(int i = n-1; i >= 0; i--)
        {
            if(v[i] == mx)
            {
                cout << ans << "\n";
                break;
            }

            ans++;
            int x = v[i];

            while(x >= v[i-1])
            {
                i--;
            }
        }
    }
}
