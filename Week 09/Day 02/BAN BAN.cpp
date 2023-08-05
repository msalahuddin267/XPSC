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

        if(n == 1)
        {
            cout << "1\n";
            cout << "1 3\n";
        }

        else if(n == 2)
        {
            cout << "1\n";
            cout << "1 6\n";
        }

        else
        {
            cout << n - 1 << "\n";
            cout << "1 6\n";

            int l = 4;

            for(int i = 9; i <= n * 3; i += 3)
            {
                cout << l << " " << i << "\n";
                l++;
            }
        }
    }
}
