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

        int x = 0, y = 0;
        bool flag = false;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'U')
                x += 1;
            else if(s[i] == 'D')
                x -= 1;
            else if(s[i] == 'R')
                y += 1;
            else
                y -= 1;

            if(x == 1 && y == 1)
            {
                flag = true;
                break;
            }
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}
