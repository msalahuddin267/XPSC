#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, k, od;
        cin >> n >> k;

        if(n & 1)
            od = n / 2 + 1;
        else
            od = n / 2;

        if(k == 1 && (od & 1))
            cout << "YES\n";

        else if(k * 2 <= n)
        {
            int rem = n - (k-1)*2;

            if(rem & 1)
                od = rem / 2 + 1;
            else
                od = rem / 2;

            if(od & 1)
                cout << "YES\n";

            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
}
