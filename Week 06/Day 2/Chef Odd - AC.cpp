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
        ll n, k;
        cin >> n >> k;

        if(k * 2 <= n)
        {
            int rem = ((n/2) + (n%2)) - k;

            if(rem & 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
