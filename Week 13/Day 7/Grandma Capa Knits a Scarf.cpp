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
        string s;
        cin >> n >> s;

        bool flag = false;
        int i = 0, j = n - 1, ans = INT_MAX;
        set<char> st;

        while(i < j)
        {
            if(s[i] != s[j])
            {
                st.insert(s[i]);
                st.insert(s[j]);
                break;
            }

            i++;
            j--;
        }

        if(st.empty())
        {
            cout << 0 << "\n";
            continue;
        }

        for(auto it : st)
        {
            i = 0, j = n - 1;
            bool f = true;
            int temp = 0;

            while(i < j)
            {
                if(s[i] == s[j])
                {
                    i++;
                    j++;
                }

                else if(s[i] == it)
                {
                    i++;
                    temp++;
                }

                else if(s[j] == it)
                {
                    j--;
                    temp++;
                }

                else
                {
                    f = false;
                    break;
                }
            }

            if(f)
            {
                flag = true;
                ans = min(ans, temp);
            }
        }

        if(flag)
            cout << ans << "\n";
        else
            cout << "-1\n";
    }
}
