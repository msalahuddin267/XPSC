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
        int a, b, c, x, y, need = 0;
        cin >> a >> b >> c >> x >> y;

        x -= a;
        y -= b;

        if(x > 0)
            need += x;

        if(y > 0)
            need += y;

        if(c < need)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
