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
        int x, k;
        cin >> x >> k;

        if(x % k)
            cout << "1\n" << x << "\n";

        else if(x % 2 == 0 && k % 2 == 0)
            cout << "2\n" << x - 1 << " 1" << "\n";

        else
            cout << "2\n" << x - 1 << " 1" << "\n";
    }
}
