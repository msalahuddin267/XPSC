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
            continue;
        }

        if(n & 1)
            cout << "-1\n";
        else
        {
            int lg = n, sm = 1;
            int run = n / 2;

            while(run--)
            {
                cout << lg << " " << sm << " ";
                lg -= 2;
                sm += 2;
            }
        }
    }
}
