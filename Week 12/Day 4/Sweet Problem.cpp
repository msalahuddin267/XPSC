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
        ll r, g, b;
        cin >> r >> g >> b;

        if(r == g && g == b)
        {
            ll ans = r + (r / 2);
            cout << ans << "\n";
        }

        else if(r == g || r == b || g == b)
        {
            if(r == g)
            {
                if(r < b)
                {
                    ll ans = r + r;
                    cout << ans << "\n";
                }
                else
                {
                    ll m = (b + 2 - 1) / 2;
                    ll ans = b + (r - m);
                    cout << ans << "\n";
                }
            }
            else if(r == b)
            {
                if(r < g)
                {
                    ll ans = r + r;
                    cout << ans << "\n";
                }
                else
                {
                    ll m = (g + 2 - 1) / 2;
                    ll ans = g + (r - m);
                    cout << ans << "\n";
                }
            }
            else
            {
                if(b < r)
                {
                    ll ans = b + b;
                    cout << ans << "\n";
                }
                else
                {
                    ll m = (r + 2 - 1) / 2;
                    ll ans = r + (b - m);
                    cout << ans << "\n";
                }
            }
        }
        else
        {
            ll ans;
            if(r > g && r > b)
            {
                if(g > b)
                {
                    ans = r - g;
                    r -= ans;
                    b -= ans;
                }
                else
                {
                    ans = r - b;
                    r -= ans;
                    g -= ans;
                }
            }
            else if(g > r && g > b)
            {
                if(r > b)
                {
                    ans = g - r;
                    g -= ans;
                    b -= ans;
                }
                else
                {
                    ans = g - b;
                    g -= ans;
                    r -= ans;
                }
            }
            else
            {
                if(r > g)
                {
                    ans = b - r;
                    b -= ans;
                    g -= ans;
                }
                else
                {
                    ans = b - g;
                    b -= ans;
                    r -= ans;
                }
            }

            if(r == g)
            {
                if(r < b)
                {
                    ans = r + r;
                    cout << ans << "\n";
                }
                else
                {
                    ll m = (b + 2 - 1) / 2;
                    ans = b + (r - m);
                    cout << ans << "\n";
                }
            }
            else if(r == b)
            {
                if(r < g)
                {
                    ans = r + r;
                    cout << ans << "\n";
                }
                else
                {
                    ll m = (g + 2 - 1) / 2;
                    ans = g + (r - m);
                    cout << ans << "\n";
                }
            }
            else
            {
                if(b < r)
                {
                    ans = b + b;
                    cout << ans << "\n";
                }
                else
                {
                    ll m = (r + 2 - 1) / 2;
                    ans = r + (b - m);
                    cout << ans << "\n";
                }
            }
        }
    }
}
