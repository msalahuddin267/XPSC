#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s, ans = "";
        cin >> s;
        int i = 0, j = 0;

        while(j < n)
        {
            j++;
            if(s[i] == s[j])
            {
                ans += s[i];
                j++;
                i = j;
            }
        }
        cout << ans << endl;
    }
}
