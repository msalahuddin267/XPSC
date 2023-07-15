#include<bits/stdc++.h>
using namespace std;

const int  n = 101;

int main()
{
    int s, t, ans = 0;
    cin >> s >> t;

    for(int a = 0; a < n; a++)
    {
        for(int b = 0; b < n; b++)
        {
            for(int c = 0; c < n; c++)
            {
                if(a+b+c <= s && a*b*c <= t)
                    ans++;
                else
                    break;
            }
        }
    }
    cout << ans << "\n";
}
