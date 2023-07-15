#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;
        map<char, int> mp;

        while(n--)
        {
            char ch;
            cin >> ch;
            mp[ch]++;
        }

        for(auto it : mp)
        {
            ans += it.second+1;
        }
        cout << ans << "\n";
    }
}
