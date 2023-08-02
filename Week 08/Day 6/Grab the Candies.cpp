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
        int n;
        cin >> n;

        int od_sum = 0, ev_sum = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x & 1)
                od_sum += x;
            else
                ev_sum += x;
        }

        if(od_sum >= ev_sum)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
