#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i <= 10000; i++)
    {
        if((a ^ i) < (b ^ i) && (b ^ i) < (c ^ i))
        {
            cout << i << "\n";
            return;
        }
    }
    cout << "-1\n";
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
