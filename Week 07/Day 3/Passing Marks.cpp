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
        int n, m;
        cin >> n >> m;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.rbegin(), v.rend());

        cout << v[m-1] - 1 << "\n";
    }
}
