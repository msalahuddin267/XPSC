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
        cout << "\n";

        int n, q;
        cin >> n >> q;

        map<int, multiset<int>> mp;

        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num].insert(i);
        }

        while(q--)
        {
            int a, b;
            cin >> a >> b;

            if(mp.find(a) != mp.end())
            {
                if(mp.find(b) != mp.end())
                {
                    if(*mp[a].begin() < *mp[b].rbegin())
                        cout << "YES\n";

                    else
                        cout << "NO\n";
                }

                else
                    cout << "NO\n";
            }

            else
                cout << "NO\n";
        }

    }
}
