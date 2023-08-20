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
            int x;
            cin >> x;

            int l = 0, r = n - 1, ans = -1;
            while(l <= r)
            {
                int mid = l + (r - l) / 2;

                if(v[mid] == x)
                {
                    ans = mid;
                    r = mid - 1;
                }

                else if(v[mid] > x)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if(ans == -1)
                cout << x << " not found\n";
            else
                cout << x << " found at " << ans + 1 << "\n";
        }
    }
}
