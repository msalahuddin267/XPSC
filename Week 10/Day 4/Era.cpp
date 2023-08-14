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

        int ara[n+1];
        for(int i = 1; i <= n; i++)
            cin >> ara[i];

        int ans = 0, idx = 1;
        for(int i = 1; i <= n; i++)
        {
            if(ara[i] > idx)
            {
                ans += ara[i]-idx;
                idx += (ara[i]-idx)+1;
            }
            else
                idx++;
        }
        cout << ans << "\n";
    }
}

