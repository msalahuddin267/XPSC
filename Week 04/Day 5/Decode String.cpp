#include<bits/stdc++.h>
using namespace std;

char convert(int num)
{
    return 'a' + num - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        string s, ans;
        cin >> s;

        int i = n-1;
        while(i >= 0)
        {
            if(s[i] == '0')
            {
                int num = stoi(s.substr(i-2, 2));
                ans += convert(num);
                i -= 3;
            }
            else
            {
                ans += convert(s[i]-'0');
                i--;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }
}

