#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int num, ans = 0;

    while(s.size() != 1)
    {
        num = 0;
        for(int i = 0; i < s.size(); i++)
        {
            int digit = s[i] - '0';
            num += digit;
        }
        s = to_string(num);
        ans++;
    }

    cout << ans << "\n";
}
