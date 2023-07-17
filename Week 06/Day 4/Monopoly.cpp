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
        int a[4], sum = 0, mx = INT_MIN;
        for(int i = 0; i < 4; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i] > mx)
                mx = a[i];
        }

        sum -= mx;
        if(mx > sum)
            cout << "YES\n";
        else cout << "NO\n";

    }
}
