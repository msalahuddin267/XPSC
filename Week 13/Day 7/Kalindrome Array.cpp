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

        vector<int> v(n);
        map<int, int> mp;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        if(mp.size() <= 2)
        {
            cout << "YES\n";
            continue;
        }

        int cnt = 0;
        vector<int> unq;

        for(auto [a, b] : mp)
        {
            if(b & 1)
            {
                cnt++;
            }
            unq.push_back(a);
        }

        if(cnt > 2)
        {
            cout << "NO\n";
            continue;
        }

        bool flag = false;

        for(int k = 0; k < unq.size(); k++)
        {
            int i = 0, j = n-1, x = unq[k];
            bool flag2 = true;

            while(i < j)
            {
                while(v[i] == x)
                    i++;

                while(v[j] == x)
                    j--;

                if(v[i] != v[j])
                {
                    flag2 = false;
                    break;
                }
                i++;
                j--;
            }
            if(flag2)
            {
                flag = true;
                break;
            }
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
