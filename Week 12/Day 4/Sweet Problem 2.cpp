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
        ll a[3];
        for(int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a, a + 3);

        if(a[2] >= a[0] + a[1])
            cout << a[0] + a[1] << "\n";

        else
            cout << (a[0] + a[1] + a[2]) / 2 << "\n";
    }
}
