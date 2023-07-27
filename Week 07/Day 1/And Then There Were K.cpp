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
        int n, ans = 1;
        cin >> n;

        for(int i = 1; ans <= n; i++)
        {
            ans = 1 << i;
        }
        ans = ans >> 1;
        cout << ans - 1 << "\n";
    }
}
