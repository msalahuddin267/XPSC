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
        int n, ans = 0;
        cin >> n;

        while(n != 50)
        {
            if(n > 50)
            {
                n -= 3;
                ans++;
            }
            if(n < 50)
            {
                n += 2;
                ans++;
            }
        }
        cout << ans << "\n";
    }
}

