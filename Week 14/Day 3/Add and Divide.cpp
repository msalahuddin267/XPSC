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
        int a, b;
        cin >> a >> b;

        if(b >= 6)
        {
            int ans = 0;

            while(a)
            {
                ans++;
                a /= b;
            }

            cout << ans << "\n";
        }

        else
        {
            int ans = INT_MAX, idx;

            for(int i = 2; i <= 6; i++)
            {
                int temp = a, cnt = 0;

                while(temp)
                {
                    cnt++;
                    temp /= i;
                }

                if(b < i)
                    cnt += i - b;

                ans = min(ans, cnt);
            }

            cout << ans << "\n";
        }
    }
}
