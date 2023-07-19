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
        int n;
        cin >> n;

        set<int>st;

        while(n--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }

        int ans = *st.rbegin();
        st.erase(ans);
        cout << ans + *st.rbegin() << "\n";
    }
}
