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

        int ans = 0, zero = -1;
        bool flag = false, flag2 = false;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                zero = i-1;
                ans++;
                flag = true;
                break;
            }
        }

        if(flag)
        {
            for(int i = zero; i >= 0; i--)
            {
                if(s[i] == '1')
                {
                    ans++;
                    break;
                }
                ans++;
            }
            cout << ans << "\n";
        }

        else
        {
            for(int i = s.size()-1; i >= 0; i--)
            {
                if(s[i] == '1')
                {
                    ans++;
                    flag2 = true;
                    break;
                }
                ans++;
            }

            if(flag2)
                cout << ans << "\n";
            else
                cout << s.size() << "\n";
        }
    }
}
