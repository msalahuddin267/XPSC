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
        int n, ans;
        cin >> n;
        map<int, int> mp;
        bool flag = false;

        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }

        for(auto it : mp)
        {
            if(it.second > 2)
            {
                flag = true;
                ans = it.first;
                break;
            }
        }

        if(flag)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
}


