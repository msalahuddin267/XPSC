#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a, b;
    cin >> a >> b;

    int n = a.size();

    if(a == b)
    {
        cout << "YES\n";
        return;
    }

    if(a[1] == '1' && b[1] == '1')
    {
        cout << "YES\n";
        return;
    }

    if(a[n-2] == '0' && b[n-2] == '0')
    {
        cout << "YES\n";
        return;
    }

    bool flag = false;

    for(int i = 0; i < n-1; i++)
    {
        if(a[i] == b[0] && b[i] == a[0] && a[i+1] == b[i+1] && a[i+1] == a[n-1])
            flag = true;
    }

    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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
