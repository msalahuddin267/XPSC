#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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
        map<char, int> mp;

        cin >> n >> s;

        for(int i = 0; i < n; i++)
            mp[s[i]]++;

        int od = 0;

        for(auto it : mp)
        {
            if(it.second & 1)
                od++;
        }

        if(od >= 2)
            cout << "0\n";

        else if(od == 1 && mp.size() > 1)
            cout << "1\n";

        else if(od == 0 && mp.size() > 1)
            cout << "1\n";

        else if(od == 0 && mp.size() == 1 && mp[s[0]] % 2 == 0)
            cout << "1\n";

        else
            cout << "2\n";
    }
}
