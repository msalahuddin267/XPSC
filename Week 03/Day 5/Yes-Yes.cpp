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

        bool flag = true;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'Y')
            {
                if(i == s.size()-1)
                    continue;

                if(s[i+1] == 'e')
                    continue;
            }

            if(s[i] == 'e')
            {
                if(i == s.size()-1)
                    continue;

                if(s[i+1] == 's')
                    continue;
            }

            if(s[i] == 's')
            {
                if(i == s.size()-1)
                    continue;

                if(s[i+1] == 'Y')
                    continue;
            }

            flag = false;
            break;
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

