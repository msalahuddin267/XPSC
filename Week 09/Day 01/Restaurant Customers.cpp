#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;

    while(n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }

    int ans = 0, sum = 0;

    for(auto it : mp)
    {
        sum += it.second;
        ans = max(ans, sum);
    }
    cout << ans << "\n";
}
