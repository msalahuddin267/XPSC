#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int h, x, y, ans = 1;
        cin >> h >> x >> y;

        h = h - y;
        ans += h / x;
        if(h % x == 0)
            cout << ans << "\n";
        else
            cout << ans + 1 << "\n";
    }
    return 0;
}

