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

        vector<string> v(n);
        map<string, int> mp;
        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        for(int i = 0; i < n; i++)
        {
            bool flag = false;
            for(int j = 1; j <= v[i].size(); j++)
            {
                string s = v[i], fst = "", lst = "";
                fst = s.substr(0, j);
                int x = s.size() - j;
                lst = s.substr(j, x);

                if(mp.find(fst) != mp.end() && mp.find(lst) != mp.end())
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        for(auto it : ans)
            cout << it;
        cout <<"\n";
    }
}
