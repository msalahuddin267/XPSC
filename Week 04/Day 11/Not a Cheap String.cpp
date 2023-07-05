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
        string s;
        cin >> s;

        int p;
        cin >> p;

        vector<pair<int, char>> ans;

        for(int i = 1; i <= 26; i++)
        {
            for(int j = 0; j < s.size(); j++)
            {
                int x = s[j] - 'a' + 1;

                if(i == x)
                {
                    if(i <= p)
                    {
                        ans.push_back({j, s[j]});
                        p -= i;
                    }
                }
            }
        }

        sort(ans.begin(), ans.end());
        for(auto it : ans)
            cout << it.second;
        cout << "\n";
    }
}
