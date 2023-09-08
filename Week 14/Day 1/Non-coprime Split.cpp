#include<bits/stdc++.h>
using namespace std;
#define ll long long

int divisor_find(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return i;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;

        if(r < 4)
            cout << "-1\n";

        else if((l & 1) && (l == r))
        {
            int x = divisor_find(l);

            if(x == -1)
                cout << "-1\n";

            else
                cout << x << " " << l - x << "\n";
        }

        else
        {
            if(r & 1)
                cout << (r - 1) / 2 << " " << (r - 1) / 2 << "\n";

            else
                cout << r / 2 << " " << r / 2 << "\n";
        }
    }
}
