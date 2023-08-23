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
        int n, k, x;
        cin >> n >> k >> x;

        if(x == 1)
        {
            if(n % 2 == 0 && k > 1)
            {
                cout << "YES\n" << n / 2 << "\n";
                n = n / 2;
                while(n--)
                {
                    cout << "2 ";
                }
                cout << "\n";
            }

            else if(n % 2 == 1 && k > 2)
            {
                cout << "YES\n" << n / 2 << "\n" << "3 ";
                n = n / 2 - 1;
                while(n--)
                {
                    cout << "2 ";
                }
                cout << "\n";
            }

            else
                cout << "NO\n";
        }

        else
        {
            cout << "YES\n" << n << "\n";
            while(n--)
            {
                cout << "1 ";
            }
            cout << "\n";
        }
    }
}
