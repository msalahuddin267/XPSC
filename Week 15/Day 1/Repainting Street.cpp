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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        int ans = INT_MAX;

        for(int i = 1; i <= 100; i++)
        {
            int cnt = 0;

            for(int j = 0; j < n; j++)
            {
                if(v[j] != i)
                {
                    cnt++;
                    j += k - 1;
                }
            }

            ans = min(ans, cnt);
        }

        cout << ans << "\n";
    }
}
