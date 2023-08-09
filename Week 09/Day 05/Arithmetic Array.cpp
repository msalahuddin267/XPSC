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
        int n, sum = 0;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if(sum > n)
            cout << sum - n << "\n";

        else if(sum < n)
            cout << "1\n";

        else
            cout << "0\n";
    }
}
