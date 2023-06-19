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
        string s, pi = "314159265358979323846264338327";
        cin >> s;

        int ans = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == pi[i])
                ans++;
            else
                break;
        }
        cout << ans << "\n";
    }
}

