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

        if(n & 1)
            cout << "-1\n";
        else
        {
            cout << "1 2";
            int x = 4, y = 3;
            for(int i = 0; i < n-2; i += 2)
            {
                cout << " " << x << " " << y;
                x += 2;
                y += 2;
            }
        }
        cout << "\n";
    }
}

