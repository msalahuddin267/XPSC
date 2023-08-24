#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

        int cnt = 1, ans = 0;

        for(int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1])
                cnt++;
            else
            {
                ans = max(ans, cnt);
                cnt = 1;
            }
        }
        cout << cnt + 1 << "\n";
    }
}
