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

        vector<int> rem1, rem2;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x % 3 == 0)
                ans++;
            else
            {
                if(x % 3 == 1)
                    rem1.push_back(x);
                else
                    rem2.push_back(x);
            }
        }

        int rs;
        if(rem1.size() < rem2.size())
        {
            rs = rem2.size() - rem1.size();
            ans += rem1.size();
            rem1.clear();
            rem2.resize(rs);
        }
        else if(rem1.size() > rem2.size())
        {
            rs = rem1.size() - rem2.size();
            ans += rem2.size();
            rem2.clear();
            rem1.resize(rs);
        }
        else
        {
            ans += rem1.size();
            rem1.clear();
            rem2.clear();
        }

        ans += rem1.size() / 3;
        ans += rem2.size() / 3;

        cout << ans << "\n";
    }
}

