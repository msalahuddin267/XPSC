#include<bits/stdc++.h>
using namespace std;
#define ll long long

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

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        if(n & 1)
        {
            cout << "4\n";
            cout << "1 " << n - 1 << "\n";
            cout << "1 " << n - 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            cout << n - 1 << " " << n << "\n";
        }

        else
        {
            cout << "2\n";
            cout << "1 " << n << "\n";
            cout << "1 " << n << "\n";
        }
    }
}
