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
        int n;
        cin >> n;

        string s;
        cin >> s;

        char serv = 'A';
        int a = 0, b = 0;

        for(int i = 0; i < n; i++)
        {
            if(serv == 'A' && s[i] == 'A') a++;
            else if(serv == 'B' && s[i] == 'B') b++;
            else
            {
                if(serv == 'A' && s[i] == 'B') serv = 'B';
                else if(serv == 'B' && s[i] == 'A') serv = 'A';
            }
        }
        cout << a << " " << b << "\n";
    }
}
