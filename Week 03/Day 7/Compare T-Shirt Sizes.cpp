#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    if(s1 == s2)
    {
        cout << "=\n";
        return;
    }

    long long a = 1, b = 1;
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] == 'X')
            a *= 2;

        else if(s1[i] == 'L')
            a *= 5;

        else if(s1[i] == 'M')
            a *= 3;

        else if(s1[i] == 'S')
            a *= -2;
    }

    for(int i = 0; i < s2.size(); i++)
    {
        if(s2[i] == 'X')
            b *= 2;

        else if(s2[i] == 'L')
            b *= 5;

        else if(s2[i] == 'M')
            b *= 3;

        else if(s2[i] == 'S')
            b *= -2;
    }

    if(a > b)
        cout << ">\n";
    else
        cout << "<\n";

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

