#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if(n % k == 0)
            cout << n << "\n";
        else
        {
            int can = n / k;
            int rem = n % k;
            can = can * k;
            k = k / 2;

            if(rem > k)
                can = can + k;
            else
                can = can + rem;

            cout << can << "\n";
        }
    }
}
