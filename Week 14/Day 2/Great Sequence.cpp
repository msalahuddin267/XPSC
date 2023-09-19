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
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);
        unordered_multiset<ll> st;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i++)
        {
            if(st.size() > 1)
            {
                if(st.find(v[i]) != st.end() && st.find(v[i] * x) != st.end())
                {
                    auto a = st.find(v[i]);
                    auto b = st.find(v[i] * x);
                    st.erase(a);
                    st.erase(b);
                }
            }
        }

        cout << st.size() << "\n";
    }
}
