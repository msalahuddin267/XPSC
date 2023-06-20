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

        string s;
        cin >> s;

        map<string, int> mp;

        for(int i = 0; i < n-1; i++)
        {
            string temp = s.substr(i,2);
            mp[temp]++;
        }

        for(auto it : mp)
            ans++;
        cout << ans << "\n";
    }
}

