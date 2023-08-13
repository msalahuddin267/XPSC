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

        ll o_mn = a, tw_mn = b * 2, th_mn = c * 3;
        ll dif = abs((o_mn + tw_mn) - th_mn);

        if(dif & 1)
            cout << "1\n";
        else
            cout << "0\n";
    }
}

