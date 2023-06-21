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
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }

        string temp = s.substr(0,1);

        for(int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1])
                continue;
            else
                temp += s[i];
        }

        if(temp == "meow")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
