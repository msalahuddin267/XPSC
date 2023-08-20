#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, tc = 1;
    while(cin >> n >> q)
    {
        if(n == 0 && q == 0)
            break;

        cout << "CASE# " << tc << ":\n";
        tc++;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        while(q--)
        {
            int x, ans;
            cin >> x;

            auto low = lower_bound(v.begin(), v.end(), x);
            int idx = low - v.begin();

            if(idx == n || v[idx] != x)
                ans = -1;
            else
                ans = idx;

            if(ans == -1)
                cout << x << " not found\n";
            else
                cout << x << " found at " << ans + 1 << "\n";
        }
    }
}
