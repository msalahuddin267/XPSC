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

        if(x > y)
            cout << "0 0\n";

        else if(x == y)
            cout << "2 1\n";

        else
        {
            if(y % x == 0)
                cout << "1 " << y/x << "\n";
            else
                cout << "0 0\n";
        }
    }
}
