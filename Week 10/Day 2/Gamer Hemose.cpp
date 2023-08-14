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
        int n, h;
        cin >> n >> h;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end(), greater<int>());

        int ans = (h / (v[0] + v[1])) * 2;

        if(h % (v[0] + v[1]) == 0)
            cout << ans << "\n";

        else if(h % (v[0] + v[1]) <= v[0])
            cout << ans + 1 << "\n";

        else
            cout << ans + 2 << "\n";
    }
}

