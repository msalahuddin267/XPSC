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
        int n, m, k, h, ans = 0;
        cin >> n >> m >> k >> h;

        vector<int> v(n), dif(n);
        vector<int> stp(m+1);
        set<int> st;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            dif[i] = abs(v[i] - h);
        }

        for(int i = 1; i <= m; i++)
            stp[i] = i * k;

        for(int i = 1; i <= m; i++)
        {
            for(int j = i+1; j <= m; j++)
            {
                st.insert(abs(stp[i] - stp[j]));
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(st.find(dif[i]) != st.end())
                ans++;
        }

        cout << ans << "\n";
    }
}
