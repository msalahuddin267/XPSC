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

        int run = (k * 6) * 6;
        if(run >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
