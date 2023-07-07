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
        int n, ans = 0;
        cin >> n;

        vector<int> v(n+1);
        for(int i = 1; i <= n; i++)
            cin >> v[i];

        for(int i = 1; i <= n; i++)
        {
            if(v[i] != v[i+1])
            {
                if(i+2 <= n)
                {
                    if(v[i] == v[i+2])
                    {
                        ans = i+1;
                        break;
                    }
                    else
                    {
                        ans = i;
                        break;
                    }
                }

                else
                {
                    ans = n;
                }
            }
        }

        cout << ans << "\n";
    }
}
