#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        map<char, int> mp;
        bool flag = false;

        for(int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            mp[ch]++;
        }

        if(mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1)
        {
            flag = true;
        }

        for(char i = 'a'; i <= 'z'; i++)
        {
            if(i == 'i' || i == 'm' || i == 'u' || i == 'r')
                continue;

            if(mp[i] > 0)
                flag = false;
        }

        for(char i = 'A'; i <= 'Z'; i++)
        {
            if(i == 'T')
                continue;

            if(mp[i] > 0)
                flag = false;
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
