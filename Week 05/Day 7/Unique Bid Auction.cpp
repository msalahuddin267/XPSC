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

        vector<pair<int, int>> v(n+1);

        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[i] = {x, i};
        }

        sort(v.begin(), v.end());

        for(int i = 1; i <= n; i++)
        {
            if(i == n)
            {
                ans = v[i].second;
                break;
            }

            else if(v[i].first == v[i+1].first)
            {
                while(v[i].first == v[i+1].first)
                    i++;
            }
            else
            {
                ans = v[i].second;
                break;
            }

        }
        cout << ans << "\n";
    }
}

