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
        int one = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] == 1)
                one++;
        }

        if(v[n-1] >= n || one < 2)
        {
            cout << "-1\n";
            continue;
        }

        set<int> st;
        for(int i = 1; i <= n; i++)
            st.insert(i);

        for(int i = 0; i < n; i++)
        {
            if(v[i] == i + 1)
            {
                int up = *st.upper_bound(v[i]);
                cout << up << " ";
                st.erase(up);
            }
            else
            {
                int low = *st.lower_bound(v[i]);

                if(low == i + 1)
                {
                    int up = *st.upper_bound(low);
                    cout << up << " ";
                    st.erase(up);
                }

                else
                {
                    cout << low << " ";
                    st.erase(low);
                }
            }
        }
        cout << "\n";
    }
}
