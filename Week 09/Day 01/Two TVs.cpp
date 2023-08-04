#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, long long> mp;

    while(n--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }

    long long mx = 0;

    for(auto it : mp)
    {
        mx += it.second;
        if(mx > 2)
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
