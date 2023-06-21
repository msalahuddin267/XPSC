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
        int n, k;
        cin >> n >> k;

        map<char, int> mp;
        int pr = 0;

        for(int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            mp[ch]++;
        }

        for(char i = 'a', j = 'A'; i <= 'z' && j <= 'Z'; i++, j++)
        {
            if(mp[i] == 0 && mp[j] == 0)
                continue;

            int mn = min(mp[i], mp[j]);

            pr += mn;
            mp[i] -= mn;
            mp[j] -= mn;
        }

        for(auto it : mp)
        {
            if(it.second >= 2 && k > 0)
            {
                while(it.second >= 2)
                {
                    it.second -= 2;
                    pr++;
                    k--;
                    if(k == 0)
                        break;
                }
            }
        }
        cout << pr << "\n";
    }
}
