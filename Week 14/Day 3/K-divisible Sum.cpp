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
        int n, k;
        cin >> n >> k;

        if(n == k)
            cout << "1\n";

        else if(n < k)
        {
            if(k % n)
                cout << k / n + 1 << "\n";
            else
                cout << k / n << "\n";
        }

        else
        {
            if(n % k)
                cout << "2\n";
            else
                cout << "1\n";
        }
    }
}
