#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x, y, ans = 0;
    cin >> x >> y;

    while(x <= y)
    {
        x = x * 2;
        ans++;
    }

    cout << ans << "\n";
}

