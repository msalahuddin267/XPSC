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
        int n, ans = -1;
        cin >> n;

        vector<int> v(n);
        vector<int> t(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i <= (1<<8); i++)
        {
            for(int j = 0; j < n; j++)
            {
                t[j] = v[j] ^ i;
            }

            int res = t[0];

            for(int k = 1; k < n; k++)
            {
                res = res ^ t[k];
            }
            if(res == 0)
            {
                ans = i;
                break;
            }
        }

        cout << ans << "\n";
    }
}
