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
        int n, ans = 1;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        for(int i = 0; i < n-1; i++)
        {
            if(v[i] - v[i+1] == 1 || v[i] - v[i+1] == -1)
            {
                ans = 2;
                break;
            }
        }
        cout << ans << "\n";
    }
}


