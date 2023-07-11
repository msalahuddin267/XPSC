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
        ll n;
        cin >> n;

        while(n % 2 == 0)
            n /= 2;

        cout << (n > 1 ? "YES\n" : "NO\n");
    }
}
