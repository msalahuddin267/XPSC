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
        string s;
        cin >> s;

        string cpy = s;

        sort(cpy.begin(), cpy.end());

        cout << cpy.front() << " ";

        bool flag = true;
        for(int i = 0; i < s.size(); i++)
        {
            if(cpy.front() == s[i] && flag)
            {
                flag = false;
                continue;
            }
            cout << s[i];
        }

        cout << "\n";
    }
}
