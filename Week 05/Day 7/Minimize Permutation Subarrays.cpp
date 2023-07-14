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
        int n, a, b, x;
        cin >> n;

        vector<int> v(n+1);

        for(int i = 1; i <= n; i++)
            cin >> v[i];

        for(int i = 1; i <= n; i++)
        {
            if(v[i] == 1)
                a = i;
            else if(v[i] == 2)
                b = i;
            else if(v[i] == n)
                x = i;
        }

        if(x > a && x < b || x < a && x > b)
            cout << a << " " << b << "\n";

        else if(x < a && x < b)
        {
            if(a < b)
                cout << x << " " << a << "\n";
            else
                cout << x << " " << b << "\n";
        }

        else if(x > a && x > b)
        {
            if(a < b)
                cout << x << " " << b << "\n";
            else
                cout << x << " " << a << "\n";
        }
    }
}

