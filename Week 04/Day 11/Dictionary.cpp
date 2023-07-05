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

        map<string, int> mp;
        char x = 'a', y = 'b';

        for(int i = 1; i <= 650; i++)
        {
            if(x == y)
            {
                y++;
                i--;
                continue;
            }

            string ss = "";
            ss += x;
            ss += y;

            mp[ss] = i;
            y++;

            if(y > 'z')
            {
                x++;
                y = 'a';
            }
        }

        cout << mp[s] << "\n";
    }
}

