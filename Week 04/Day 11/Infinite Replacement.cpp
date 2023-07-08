#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s, rep;
    cin >> s >> rep;

    if(rep.size() == 1 && rep[0] == 'a')
    {
        cout << "1\n";
        return;
    }

    map<char, int> mp;
    for(int i = 0; i < rep.size(); i++)
    {
        mp[rep[i]]++;
    }

    if(mp['a'] > 0)
    {
        cout << "-1\n";
        return;
    }

    cout << (long long)pow(2,s.size()) << "\n";
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
