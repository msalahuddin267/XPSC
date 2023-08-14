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
        ll a, b, c;
        cin >> a >> b >> c;

        if((a + b + c) % 3 == 0)
            cout << "0\n";
        else
            cout << "1\n";
    }
}
