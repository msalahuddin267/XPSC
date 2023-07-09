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
        int n, tot = 0;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            int cost;
            cin >> cost;
            tot += cost;
        }

        if(tot % n == 0)
            cout << tot / n << "\n";
        else
            cout << tot / n + 1 << "\n";
    }
}
