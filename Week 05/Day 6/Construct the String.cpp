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
        int n, l, u;
        cin >> n >> l >> u;

        string s = "", ans = "";
        char  ch = 'a';

        for(char i = 1; i <= u; i++)
        {
            s.push_back(ch);
            ch++;
        }

        int len = 0;
        while(len < n)
        {
            string sub = "";
            if(len + u <= n)
            {
                sub = s.substr(0, u);
                len += u;
            }
            else
            {
                sub = s.substr(0, n-len);
                len += n-len;
            }
            ans += sub;
        }
        cout << ans << "\n";
    }
}
