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
        string s, ans = "";
        cin >> s;

        for(int i = 0; i < s.size(); i++)
        {
            if(ans.size() == 0)
                ans += s[i];
            else
            {
                if(ans.back() == 'A' && s[i] == 'B')
                    ans.pop_back();
                else
                    ans += s[i];
            }
        }

        int b = 0;
        for(int i = 0; i < ans.size(); i++)
        {
            if(ans[i] == 'B' && i+1 < ans.size() && ans[i+1] == 'B')
            {
                b++;
                i++;
            }
        }

        cout << ans.size() - b * 2 << "\n";
    }
}
