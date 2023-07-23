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
        ll n;
        cin >> n;

        if(n == 0)
            cout << "1 3 4 5\n";
        else
        {
            ll a = 1, b = 2, c = 0, d = 0;

            for(int i = 3; i <= 1e8; i++)
            {
                ll temp = i ^ n;
                if(i != temp && temp > 2)
                {
                    c = i;
                    d = temp;
                    break;
                }
            }

            if(c == 0)
                cout << "-1\n";
            else
                cout << a << " " << b << " " << c << " " << d << "\n";
        }
    }
}

