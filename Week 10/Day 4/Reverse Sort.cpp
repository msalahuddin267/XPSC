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

        string s, cpy;
        cin >> s;

        cpy = s;

        sort(s.begin(), s.end());

        int len = 0;
        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            if(s[i] != cpy[i])
            {
                len++;
                ans.push_back(i+1);
            }
        }

        if(len == 0)
        {
            cout << "0\n";
            continue;
        }

        cout << "1\n";
        cout << len << " ";
        for(auto it : ans)
            cout << it << " ";
        cout << "\n";
    }
}

