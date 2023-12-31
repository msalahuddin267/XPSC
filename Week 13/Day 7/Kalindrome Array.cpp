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
        set<int> st;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        int i = 0, j = n - 1;
        bool flag = false;

        while(i < j)
        {
            if(v[i] != v[j])
            {
                st.insert(v[i]);
                st.insert(v[j]);
                break;
            }

            i++;
            j--;
        }

        if(st.empty())
        {
            cout << "YES\n";
            continue;
        }

        for(auto it : st)
        {
            i = 0, j = n - 1;
            bool f = true;

            while(i < j)
            {
                if(v[i] == it)
                {
                    i++;
                    continue;
                }

                else if(v[j] == it)
                {
                    j--;
                    continue;
                }

                else
                {
                    if(v[i] != v[j])
                    {
                        f = false;
                        break;
                    }
                }

                i++;
                j--;
            }

            if(f)
            {
                flag = true;
                break;
            }
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
