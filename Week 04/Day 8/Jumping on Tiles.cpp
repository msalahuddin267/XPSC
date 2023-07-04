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

        vector<pair<char, int>> v;
        vector<int> ans;

        if(s[0] < s[s.size()-1])
        {
            for(int i = 1; i < s.size()-1; i++)
            {
                if(s[i] >= s[0] && s[i] <= s[s.size()-1])
                    v.push_back({s[i], i});
            }
            sort(v.begin(), v.end());

            ans.push_back(1);

            for(auto it : v)
                ans.push_back(it.second+1);

            ans.push_back(s.size());

            int cost = abs(s[0] - s[s.size()-1]);

            cout << cost << " " << ans.size() << "\n";
            for(auto it : ans)
                cout << it << " ";
            cout << "\n";
        }

        else
        {
            for(int i = 1; i < s.size()-1; i++)
            {
                if(s[i] <= s[0] && s[i] >= s[s.size()-1])
                    v.push_back({s[i], i});
            }
            sort(v.begin(), v.end(),greater<pair<char, int>>());

            ans.push_back(1);

            for(auto it : v)
                ans.push_back(it.second+1);

            ans.push_back(s.size());

            int cost = abs(s[0] - s[s.size()-1]);

            cout << cost << " " << ans.size() << "\n";
            for(auto it : ans)
                cout << it << " ";
            cout << "\n";
        }
    }
}

