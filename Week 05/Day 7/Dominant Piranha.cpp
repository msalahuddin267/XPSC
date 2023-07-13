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

        vector<int> v(n);
        map<int, int> mp;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        if(mp.size() == 1)
            cout << "-1\n";

        else
        {
            int mx = v[0];
            for(int i = 1; i < n; i++)
            {
                if(v[i] > mx)
                    mx = v[i];
            }

            for(int i = 0; i < n; i++)
            {
                if(v[i] == mx && i+1 < n && v[i] > v[i+1])
                {
                    ans = i + 1;
                    break;
                }

                else if(v[i] == mx && i-1 >= 0 && v[i] > v[i-1])
                {
                    ans = i + 1;
                    break;
                }
            }
            cout << ans << "\n";
        }
    }
}
