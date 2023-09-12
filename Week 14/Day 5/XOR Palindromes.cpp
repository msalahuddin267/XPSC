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
        cin >> n;

        string s, ans;
        cin >> s;

        int need = 0, right = 0;
        int i = 0, j = n - 1;

        while(i < j)
        {
            if(s[i] == s[j])
                right += 2;

            else
                need++;

            i++;
            j--;
        }

        if(n & 1)
            right++;

        for(int i = 0; i <= n; i++)
        {
            if(i < need)
                ans += '0';

            else if(i > right + need)
                ans += '0';

            else
            {
                if(n % 2 == 0 && ((i - need) & 1))
                    ans += '0';

                else
                    ans += '1';
            }
        }

        cout << ans << "\n";
    }
}
