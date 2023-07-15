#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n];
    vector<int> v(n+1);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i <= n; i++)
        v[i+1] = a[i] + v[i];

    int q;
    cin >> q;

    while(q--)
    {
        int a, b;
        cin >> a >> b;

        int ans = v[b+1] - v[a];
        cout << ans << "\n";
    }
}
