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
        int x, y;
        cin >> x >> y;

        if(x < y)
            cout << x + (y - x) * 2 << "\n";
        else
            cout << y << "\n";
    }
}
