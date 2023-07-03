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
        int n, slp_h, slp_m, ans = 1e9;
        cin >> n >> slp_h >> slp_m;

        while(n--)
        {
            int alm_h, alm_m;
            cin >> alm_h >> alm_m;

            int tot_slp = 60 * slp_h + slp_m;
            int tot_alm = 60 * alm_h + alm_m;

            int diff = tot_alm - tot_slp;

            if(diff < 0)
                diff += 1440;

            ans = min(ans, diff);
        }

        cout << ans / 60 << " " << ans % 60 << "\n";
    }
}
