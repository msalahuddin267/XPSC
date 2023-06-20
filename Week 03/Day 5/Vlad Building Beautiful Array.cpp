#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a[n];
    bool flag = true;

    for(int i = 0; i < n; i ++)
        cin >> a[i];

    if(a[0] % 2 == 0)
    {
        for(int i = 1; i < n; i ++)
        {
            if(a[i] % 2 == 1)
            {
                flag = false;
                break;
            }
        }
    }

    else
    {
        for(int i = 1; i < n; i ++)
        {
            if(a[i] % 2 == 0)
            {
                flag = false;
                break;
            }
        }
    }

    if(flag)
    {
        cout << "YES\n";
        return;
    }

    else
    {
        int min_evn = INT_MAX, min_odd = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 0 && a[i] < min_evn)
            {
                min_evn = a[i];
            }

            if(a[i] % 2 == 1 && a[i] < min_odd)
            {
                min_odd = a[i];
            }
        }

        if(min_odd < min_evn)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
