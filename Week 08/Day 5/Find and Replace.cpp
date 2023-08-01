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
        string s;

        cin >> n >> s;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0' || s[i] == '1')
                continue;

            char ch = s[i];

            if(i == 0)
                s[i] = '0';
            else
            {
                if(s[i-1] == '0')
                    s[i] = '1';
                else
                    s[i] = '0';
            }

            for(int j = i+1; j < n; j++)
            {
                if(ch == s[j])
                    s[j] = s[i];
            }
        }

        bool flag = true;
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == s[i+1])
            {
                flag = false;
                break;
            }
        }

        if(flag) cout << "Yes\n";
        else cout << "No\n";
    }
}
