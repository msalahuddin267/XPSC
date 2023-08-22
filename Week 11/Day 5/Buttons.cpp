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

        if(a == b && (c & 1))
        {
            cout << "First\n";
            continue;
        }
        else if(a == b && !(c & 1))
        {
            cout << "Second\n";
            continue;
        }
        else if(a > b)
        {
            cout << "First\n";
            continue;
        }
        else if( a < b)
        {
            cout << "Second\n";
            continue;
        }
    }
}
