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
        int n, ans = INT_MAX;
        cin >> n;

        for(int i = 1; i * i <= n; i++)
        {
            ans = min(ans, i - 1 + (n - 1) / i);
        }
        cout << ans << "\n";
    }
}
