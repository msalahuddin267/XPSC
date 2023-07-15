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
        int n, k, ans;
        cin >> n >> k;

        k = min(30, k);
        ans = min(1 << k, n+1);

        cout << ans << "\n";
    }
}
