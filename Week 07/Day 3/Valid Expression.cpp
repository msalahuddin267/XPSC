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
        int n, x;
        cin >> n >> x;

        int l = (n-1) * (-1);
        int r = n + 1;
        string ans;

        if(x >= l && x <= r)
        {
            if(x > 0)
            {
                if(x == 1)
                {
                    while(n)
                    {
                        ans += "*";
                        n--;
                    }
                }
                else
                {
                    ans += "+";
                    n--;
                    int done = 2;

                    while(n)
                    {
                        if(done != x)
                        {
                            ans += "+";
                            n--;
                            done++;
                        }
                        else
                        {
                            ans += "*";
                            n--;
                        }
                    }
                }
            }
            else if(x < 0)
            {
                ans += "--";
                n -= 2;
                int done = -1;

                while(n)
                {
                    if(x != done)
                    {
                        ans += "-";
                        n--;
                        done--;
                    }
                    else
                    {
                        ans += "*";
                        n--;
                    }
                }
            }
            else
            {
                ans += "-";
                n--;
                while(n)
                {
                    ans += "*";
                    n--;
                }
            }
            cout << ans << "\n";
        }

        else
        {
            cout << "-1\n";
        }
    }
}
