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
        string s;
        cin >> s;

        int ans = 1, cnt = 0;
        map<char, int> mp;

        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            if(mp[s[i]] == 1)
                cnt++;

            if(cnt > 3)
            {
                ans++;
                cnt = 0;
                mp.clear();
                i--;
            }
        }
        cout << ans << "\n";
    }
}
