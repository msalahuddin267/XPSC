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
        string s;
        cin >> s;

        string fst, lst;

        fst = s.substr(0, s.size() / 2);
        lst = s.substr(s.size() / 2);

        if(fst == lst)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
