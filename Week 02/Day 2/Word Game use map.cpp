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
        int n;
        cin >> n;

        vector<string> p1(n);
        vector<string> p2(n);
        vector<string> p3(n);

        int ans1 = 0, ans2 = 0, ans3 = 0;

        for(int i = 0; i < n; i++)
            cin >> p1[i];
        for(int i = 0; i < n; i++)
            cin >> p2[i];
        for(int i = 0; i < n; i++)
            cin >> p3[i];

        map<string, int> mp;
        for(int i = 0; i < n; i ++)
        {
            mp[p1[i]]++;
            mp[p2[i]]++;
            mp[p3[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            if(mp[p1[i]] == 1)
                ans1 += 3;
            else if(mp[p1[i]] == 2)
                ans1 += 1;

            if(mp[p2[i]] == 1)
                ans2 += 3;
            else if(mp[p2[i]] == 2)
                ans2 += 1;

            if(mp[p3[i]] == 1)
                ans3 += 3;
            else if(mp[p3[i]] == 2)
                ans3 += 1;
        }

        cout << ans1 << " " << ans2 << " " << ans3 << "\n";
    }
}

