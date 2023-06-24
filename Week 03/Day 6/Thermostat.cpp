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
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if(a > b)
            swap(a,b);

        if(a == b)
            cout << "0\n";
        else
        {
            if(a < b)
            {
                if(b - a >= x)
                    cout << "1\n";

                else if(a - x >= l)
                    cout << "2\n";

                else if(b + x <= r)
                    cout << "2\n";

                else if(a + x <= r && l + x <= b)
                    cout << "3\n";

                else
                    cout << "-1\n";
            }
        }
    }
}

