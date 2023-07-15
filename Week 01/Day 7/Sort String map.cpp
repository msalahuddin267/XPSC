#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char,int> mp;

    for(int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    for(auto it : mp)
    {
        for(int i = 1; i <= it.second; i++)
            cout << it.first;
    }
}
