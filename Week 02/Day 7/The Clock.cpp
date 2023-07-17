#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    int i = 0, j = s.size()-1;
    while(i < j)
    {
        if(s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int n, ans = 0;
        cin >> s >> n;

        int h = n / 60;
        int m = n % 60;
        map<string, bool> mp;

        while(!mp[s])
        {
            if(palindrome(s))
                ans++;
            mp[s] = true;

            int hr = ((s[0] - '0') * 10) + (s[1] - '0');
            int mn = ((s[3] - '0') * 10) + (s[4] - '0');

            mn += m;
            if(mn >= 60)
            {
                hr++;
                mn -= 60;
            }

            hr += h;
            if(hr > 23)
                hr -= 24;

            s[0] = '0' + (hr / 10);
            s[1] = '0' + (hr % 10);

            s[3] = '0' + (mn / 10);
            s[4] = '0' + (mn % 10);
        }
        cout << ans << "\n";
    }
}
