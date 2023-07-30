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
        int n, ans = 0;
        cin >> n;

        vector<int> v(n);
        bool flag = false;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n-1; i++)
        {
            if(v[i] > v[i+1])
            {
                flag = true;
                break;
            }
        }

        if(flag)
            cout << ans << "\n";
        else
        {
            int mn = INT_MAX, idx = 0;
            for(int i = 1; i < n; i++)
            {
                if(v[i] - v[i-1] < mn)
                {
                    mn = v[i] - v[i-1];
                    idx = i;
                }
            }
            int dif = v[idx] - v[idx-1];
            ans = dif / 2 + 1;

            cout << ans << "\n";
        }
    }
}
