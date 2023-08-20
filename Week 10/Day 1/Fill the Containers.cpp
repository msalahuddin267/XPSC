#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while(cin >> n >> m)
    {
        vector<int> v(n);
        int mx = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        int l = mx, r = INT_MAX, ans = -1;

        while(l <= r)
        {
            int cap = l + (r - l) / 2;
            int sum = 0, cnt = 1;

            for(int i = 0; i < n; i++)
            {
                if(sum + v[i] <= cap)
                {
                    sum += v[i];
                }
                else
                {
                    cnt++;
                    sum = 0;
                    sum += v[i];
                }
            }

            if(cnt <= m)
            {
                ans = cap;
                r = cap - 1;
            }

            else
            {
                l = cap + 1;
            }
        }
        cout << ans << "\n";
    }
}
