#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, ans = INT_MAX;
        cin >> n;

        int a[n+1];
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        for(int i = 1; i <= n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                if(a[i]+a[j]+j-i < ans)
                    ans = a[i]+a[j]+j-i;
            }
        }
        cout << ans << endl;
    }
}
