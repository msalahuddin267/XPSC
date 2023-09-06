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
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> v(n);
        set<int> st;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        int ans = INT_MAX;

        for(int i = 0; i <= n - d; i++)
        {
            int j = i, run = d;
            set<int> st;

            while(run--)
            {
                st.insert(v[j]);
                j++;
            }

            int sz = st.size();
            ans = min(ans, sz);
        }

        cout << ans << "\n";
    }
}

