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
        ll n, x, y;
        cin >> n >> x >> y;

        ll lcm, a, b, val, val2;

        lcm = (x / __gcd(x, y)) * y;
        a = (n / x) - (n / lcm);
        b = (n / y) - (n / lcm);

        val = (n * (n + 1)) / 2 - ((n - a) * (n - a + 1)) / 2;
        val2 = (b * (b + 1)) / 2;

        cout << val - val2 << "\n";
    }
}

