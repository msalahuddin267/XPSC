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

        vector<int> v(n), ans(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        if(n & 1)
            cout << "NO\n";

        else
        {
            sort(v.begin(), v.end());

            int l = n / 2, idx = 0;

            for(int i = 0; i < l; i++)
            {
                ans[idx] = v[i];
                idx += 2;
            }

            idx = 1;
            bool flag = true;

            for(int i = l; i < n; i++)
            {
                ans[idx] = v[i];
                idx += 2;
            }

            for(int i = 1; i < n-1; i++)
            {
                if((ans[i] > ans[i-1] && ans[i] > ans[i+1]) || (ans[i] < ans[i-1] && ans[i] < ans[i+1]))
                    continue;

                else
                {
                    flag = false;
                    break;
                }
            }

            if(ans[0] < ans[1] && ans[0] < ans[n-1] && flag)
            {
                cout << "YES\n";
                for(auto it : ans)
                    cout << it << " ";
                cout << "\n";
            }

            else
                cout << "NO\n";
        }
    }
}
