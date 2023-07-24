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
        int x, y;
        cin >> x >> y;

        if(x % 2 == 0)
            x += 2;

        else if(x % 3 == 0)
            x += 3;

        else
            x += x;

        int ans = 1;
        int dif = (y - x);

        if(dif & 1)
            dif = dif / 2 + 1;
        else
            dif = dif / 2;

        ans += dif;
        cout << ans << "\n";
    }
}
