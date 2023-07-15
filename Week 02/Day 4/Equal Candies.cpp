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
        int n, ans = 0, mini = INT_MAX;
        cin >> n;
        int ara[n];

        for(int i = 0; i < n; i++)
        {
            cin >> ara[i];
            if(ara[i] < mini)
                mini = ara[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(ara[i] == mini)
                continue;
            else
            {
                ans += ara[i] - mini;
            }
        }
        cout << ans << "\n";
    }
}


