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

        vector<int> a(n);
        vector<int> b(n);
        vector<pair<int, int>> v;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];

        for(int i = 0; i < n; i++)
            v.push_back({a[i], b[i]});

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++)
        {
            if(v[i].first <= k)
                k += v[i].second;
        }
        cout << k << "\n";
    }
}

