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
        int b, c, h, ans = 3;
        cin >> b >> c >> h;

        b = b - 2;
        c = c + h;
        c = c - 1;

        int x = min(b, c);
        ans += x * 2;

        cout << ans << "\n";
    }
}
