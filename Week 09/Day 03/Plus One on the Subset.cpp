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

        vector<int> v(n);
        int mx = INT_MIN, mn = INT_MAX;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n; i++)
        {
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }

        cout << mx - mn << "\n";
    }
}
