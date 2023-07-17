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

        int a = 0, b = 0;
        a = a * 10 + (s[0] - '0');
        a = a * 10 + (s[1] - '0');

        b = b * 10 + (s[3] - '0');
        b = b * 10 + (s[4] - '0');

        if(a > 12 && b <= 12)
            cout << "DD/MM/YYYY\n";
        else if(a <= 12 && b > 12)
            cout << "MM/DD/YYYY\n";
        else
            cout << "BOTH\n";
    }
}
