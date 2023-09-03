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

        for(int i = 0; i < d; i++)
            st.insert(v[i]);

        int ans = st.size(), j = 0;

        for(int i = d; i < n; i++)
        {
            st.erase(v[j]);
            st.insert(v[i]);
            int sz = st.size();
            ans = min(ans, sz);
            j++;
        }

        cout << ans << "\n";
    }
}

