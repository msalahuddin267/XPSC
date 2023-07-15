#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;
    for(int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    for(char i = 'a'; i <= 'z'; i++)
    {
        if(mp[i] == 0)
        {
            cout << i;
            return 0;
        }
    }
    cout << "None" << "\n";
}
