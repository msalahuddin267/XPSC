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
        int n;
        cin >> n;

        map<int, int> mp;
        multiset<int> st;
        set<int> per;
        int cnt = 0;

        for(int i = 1; i <= n; i++)
            per.insert(i);

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x <= n && mp[x] == 0)
            {
                cnt++;
                per.erase(x);
            }
            else
                st.insert(x);

            mp[x]++;
        }

        int ans = n - cnt;
        bool flag = true;

        for(auto it : st)
        {
            int make = *per.begin();
            int div = it - make;

            if((div > 0) && (it % div == make))
                per.erase(make);

            else
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << ans << "\n";
        else
            cout << "-1\n";
    }
}
