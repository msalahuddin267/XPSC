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
        ll n, k;
        cin >> n >> k;

        if(n % 2 == 0)
        {
            cout << "YES\n";
            continue;
        }
        else if(n % k == 0)
        {
            cout << "YES\n";
            continue;
        }

        if(n > k)
        {
            n -= k;
            if(n % 2 == 0)
            {
                cout << "YES\n";
                continue;
            }
        }

        cout << "NO\n";
    }
}
