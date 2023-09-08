#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = 0;

        if(a > b)
        {
            while(a > b)
            {
                a -= c;
                b += c;
                ans++;
            }
        }

        else
        {
            while(a < b)
            {
                a += c;
                b -= c;
                ans++;
            }
        }

        cout << ans << "\n";
    }
}
