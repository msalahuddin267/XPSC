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
        int n;
        string s;

        cin >> n >> s;

        map<char, int> mp;

        for(int i = 0; i < n; i++)
            mp[s[i]]++;

        if(mp.size() == 5 && mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
