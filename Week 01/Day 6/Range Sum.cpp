#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long l, r, n, ans = 0;
        cin >> l >> r;

        if(l < r)
        {
            n = r - l + 1;
            ans = (n * (l + r)) / 2;
        }
        else
        {
            n = l - r + 1;
            ans = (n * (l + r)) / 2;
        }

        cout << ans << endl;
    }
}
