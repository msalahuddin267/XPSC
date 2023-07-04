#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, dif = -1;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0 && b[i] != 0)
        {
            dif = a[i] - b[i];
            break;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] < b[i])
        {
            cout << "NO\n";
            return;
        }

        if(b[i] != 0)
        {
            if(a[i] - b[i] != dif)
            {
                cout << "NO\n";
                return;
            }
        }

        if(b[i] == 0 && dif != -1)
        {
            if(a[i] > dif)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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
