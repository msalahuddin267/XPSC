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
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0, one = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0') cnt++;
        }
        one = n - cnt;
        int ans = min(cnt, one);

        if(ans & 1)
            cout << "Zlatan\n";
        else
            cout << "Ramos\n";
    }
}
