#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s, res = "";
    cin >> s;

    int n = s.size(), ans  = 0;
    map<char, int> mp;

    for(int i = 0; i < n; i++)
        mp[s[i]]++;

    if(mp.size() == 1)
    {
        cout << ans << "\n" << res << "\n";
        return;
    }

    if(mp.size() <= 3)
    {
        if(mp['L'] > 0 && mp['R'] > 0)
        {
            cout << "2\n" << "LR\n";
            return;
        }

        if(mp['U'] > 0 && mp['D'] > 0)
        {
            cout << "2\n" << "UD\n";
            return;
        }

        cout << ans << "\n" << res << "\n";
        return;
    }

    int lr, ud;

    if(mp['L'] > mp['R'])
        lr = mp['R'];
    else
        lr = mp['L'];

    for(int i = 0; i < lr; i++)
        res.push_back('R');

    if(mp['U'] > mp['D'])
        ud = mp['D'];
    else
        ud = mp['U'];

    for(int i = 0; i < ud; i++)
        res.push_back('D');

    for(int i = 0; i < lr; i++)
        res.push_back('L');

    for(int i = 0; i < ud; i++)
        res.push_back('U');

    ans = (lr + ud) * 2;

    cout << ans << "\n" << res << "\n";
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

