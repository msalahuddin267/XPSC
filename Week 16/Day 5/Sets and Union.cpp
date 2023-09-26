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
        int n, ans = 0;
        cin >> n;

        vector<set<int>> st(n);
        vector<int> v(51);

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            for(int j = 0; j < x; j++)
            {
                int y;
                cin >> y;

                st[i].insert(y);
                v[y]++;
            }
        }

        for(int i = 1; i <= 50; i++)
        {
            if(v[i] > 0)
            {
                set<int> tmp;

                for(int j = 0; j < n; j++)
                {
                    if(st[j].find(i) == st[j].end())
                    {
                        for(auto it : st[j])
                            tmp.insert(it);
                    }
                }

                int sz = tmp.size();
                ans = max(ans, sz);
            }
        }

        cout << ans << "\n";
    }
}
