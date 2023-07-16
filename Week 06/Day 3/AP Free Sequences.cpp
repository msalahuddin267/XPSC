#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, ck = -1;
        cin >> n;

        vector<int> v;
        map<int, int> mp;
        map<int, int> mp2;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x == ck)
                continue;
            else
            {
                ck = x;
                v.push_back(x);
            }
        }

        n = v.size();

        for(int i = n-1; i > 0; i--)
        {
            for(int j = i-1; j >= 0; j--)
            {
                mp2[v[i] - v[j]]++;

                if(mp2[v[i] - v[j]] == 1)
                    mp[v[i] - v[j]]++;
            }
            mp2.clear();
        }

        bool flag = false;
        for(auto it : mp)
        {
            if(it.second >= 2)
            {
                flag = true;
                break;
            }
        }

        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }
}
