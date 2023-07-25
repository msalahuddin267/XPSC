#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];

        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                if(b[i] * 2 >= a[i])
                    ans++;
            }
            else
            {
                if(a[i] * 2 >= b[i])
                    ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

