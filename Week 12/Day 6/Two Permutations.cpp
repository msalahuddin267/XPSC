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
        int n, a, b;
        cin >> n >> a >> b;

        if(n == a && n == b)
            cout << "YES\n";

        else
        {
            int pos = n - 2;

            if(a + b <= pos)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
