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
        int n;
        string s, ans = "";

        cin >> n >> s;

        for(int i = 0; i < n; i++)
        {
            if(i + 1 < n && s[i] == s[i+1])
            {
                int cnt = 1;

                while(i + 1 < n && s[i] == s[i+1])
                {
                    cnt++;
                    i++;
                }

                if(cnt < 3)
                {
                    while(cnt--)
                    {
                        ans += s[i];
                    }
                }

                else
                {
                    while(cnt / 3 != 0)
                    {
                        cnt = (cnt / 3) + (cnt % 3);
                    }

                    while(cnt--)
                    {
                        ans += s[i];
                    }
                }
            }
            else
            {
                ans += s[i];
            }
        }
        cout << ans << "\n";
    }
}
