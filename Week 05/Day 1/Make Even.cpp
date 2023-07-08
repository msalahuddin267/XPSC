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
        int n, ans = -1;
        cin >> n;

        if(n % 2 == 0)
            ans = 0;
        else
        {
            string s = to_string(n);
            int num = s[0] - '0';
            if(num % 2 == 0)
                ans = 1;
            else
            {
                for(int i = 1; i < s.size(); i++)
                {
                    num = s[i] - '0';
                    if(num % 2 == 0)
                        ans = 2;
                }
            }
        }
        cout << ans << "\n";
    }
}

