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
        int n, k, ans = 0;
        cin >> n >> k;

        if(k < 30)
        {
            for(int i = 0; i <= n; i++)
            {
                int j = 2, last = n, prev = i, temp;
                while(j != k && temp >= 0)
                {
                    temp = last - prev;

                    if(temp > prev)
                        break;

                    last = prev;
                    prev = temp;
                    j++;
                }
                if(j == k)
                    ans++;
            }
            cout << ans << "\n";
        }
        else
            cout << ans << "\n";
    }
}
