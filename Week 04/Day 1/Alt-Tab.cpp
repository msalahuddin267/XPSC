#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    stack<string> st;
    map<string, int> mp;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s ;
        st.push(s);
    }

    while(st.size())
    {
        string a = st.top();
        st.pop();
        mp[a]++;
        if(mp[a] == 1)
        {
            cout << a[a.size()-2] << a[a.size()-1];
        }
    }
}
