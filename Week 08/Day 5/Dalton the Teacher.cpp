#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n+1);
    int dif = 0;

    for(int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if(i == v[i])
            dif++;
    }

    if(dif % 2 == 0)
        cout << dif / 2 << "\n";
    else
        cout << dif / 2 + 1 << "\n";
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
