#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    if(n == 1)
    {
        cout << "0\n";
        return;
    }

    sort(a.begin(), a.end(), greater<int>());
    int i = 0, j = a.size()-1, ans = 0;

    while(i < j)
    {
        ans += a[i] - a[j];
        i++;
        j--;
    }
    cout << ans << "\n";
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
