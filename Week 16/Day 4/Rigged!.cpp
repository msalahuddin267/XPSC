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

        vector<pair<int, int>> v(n);
        bool flag = true;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            cin >> v[i].second;
        }

        for(int i = 1; i < n; i++)
        {
            if(v[0].first <= v[i].first && v[0].second <= v[i].second)
                flag = false;

        }

        if(flag)
            cout << v[0].first << "\n";

        else
            cout << "-1\n";
    }
}
