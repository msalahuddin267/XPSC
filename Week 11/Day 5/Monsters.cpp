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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v;

        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            x = x % k;
            v.push_back({x, i});
        }

        sort(v.begin(), v.end());

        for(auto it : v)
        {
            if(it.first == 0)
                cout << it.second << " ";
            else
                break;
        }

        sort(v.begin(), v.end(),[&](pair<int, int> x, pair<int, int> y)
        {
            if(x.first == y.first)
                return x.second < y.second;
            return x.first > y.first;
        });

        for(auto it : v)
        {
            if(it.first != 0)
                cout << it.second << " ";
            else
                break;
        }

        cout << "\n";
    }
}
