#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    int a[n];
    unordered_set<int> st;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(st.count(a[i]+1))
            ans++;
    }

    cout << ans << endl;
}
