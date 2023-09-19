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

        vector<int> v(n), bob(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        int fsm = INT_MAX, ssm = INT_MAX, ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] > fsm && v[i] < ssm)
            {
                ans++;
                ssm = v[i];
            }

            fsm = min(fsm, v[i]);
        }

        cout << ans << "\n";
    }
}
