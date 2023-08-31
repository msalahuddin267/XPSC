#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> st;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    if(st.size() == 1)
    {
        cout << "0\n";
    }

    else if(st.size() == 2)
    {
        int a = *st.begin();
        int b = *st.rbegin();

        if((b - a) & 1)
            cout << b - a << "\n";
        else
            cout << (b - a) / 2 << "\n";
    }

    else if(st.size() == 3)
    {
        int a = *st.begin();
        st.erase(a);
        int b = *st.begin();
        int c = *st.rbegin();

        if(b - a == c - b)
            cout << b - a << "\n";
        else
            cout << "-1\n";
    }

    else
    {
        cout << "-1\n";
    }
}
