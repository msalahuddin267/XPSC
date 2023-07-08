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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int i = 0, j = 0, cnt = 0, ans = 0;
        while(j < n)
        {
            if(s[j] == 'B')
            {
                cnt++;
            }
            j++;

            if(j >= k)
            {
                ans = max(ans, cnt);

                if(s[i] == 'B')
                    cnt--;

                i++;
            }
        }

        if(ans >= k)
            cout << "0\n";
        else
            cout << k - ans << "\n";
    }
}
