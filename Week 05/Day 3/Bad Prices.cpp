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

        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        int mn = INT_MAX;

        for(int i = n-1; i >= 0; i--)
        {
            if(v[i] > mn)
                ans++;

            else
                mn = v[i];
        }

        cout << ans << "\n";
    }
}
