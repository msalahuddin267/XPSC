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
        bool flag = false;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(i > 0 && v[i] == 0 && v[i-1] == 0)
            {
                flag = true;
            }
        }

        if(flag)
        {
            cout << "-1\n";
            continue;
        }

        int ans = 1;

        for(int i = 0; i < n; i++)
        {
            if(v[i] == 1 && i > 0 && v[i-1] == 1 && ans > 1)
                ans += 5;

            else if(v[i] == 1)
                ans += 1;
        }
        cout << ans << "\n";
    }
}
