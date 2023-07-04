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

        int f, s, t;

        if(n % 3 == 0)
        {
            f = n / 3 + 1;
            s = n / 3;
            t = n / 3 - 1;
            cout << s << " " << f << " " << t << "\n";
        }

        else if(n % 3 == 1)
        {
            f = n / 3 + 2;
            s = n / 3;
            t = n / 3 - 1;
            cout << s << " " << f << " " << t << "\n";
        }

        else
        {
            f = n / 3 + 2;
            s = n / 3 + 1;
            t = n / 3 - 1;
            cout << s << " " << f << " " << t << "\n";
        }
    }
}
