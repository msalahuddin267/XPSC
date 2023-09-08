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
        ll n, k;
        cin >> n >> k;

        ll low = 1, high = 1e18, ans;

        while(low <= high)
        {
            ll mid = low + (high - low) / 2;
            pair<ll, ll> idx;

            if(mid % n == 0)
            {
                idx.first = mid - (mid / n);
                idx.second = mid - 1;
            }
            else
            {
                idx.first = mid - (mid / n);
                idx.second = mid;
            }

            if(idx.first == k)
            {
                ans = idx.second;
                break;
            }

            else if(idx.first < k)
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }

        cout << ans << "\n";
    }
}
