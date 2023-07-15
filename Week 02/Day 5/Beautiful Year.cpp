#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year, ans;
    cin >> year;

    map<char, int> mp;
    for(ans = year+1; ans <= 9012; ans++)
    {
        string s = to_string(ans);
        for(int i = 0; i < 4; i++)
        {
            mp[s[i]]++;
        }
        bool flag = true;
        for(auto it : mp)
        {
            if(it.second > 1)
                flag = false;
        }
        if(flag)
        {
            cout << ans << "\n";
            break;
        }
        mp.clear();
    }
}

