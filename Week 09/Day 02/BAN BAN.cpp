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

        int op = n / 2;
        op += n % 2;

        cout << op << "\n";

        int l = 1, r = n * 3;

        for(int i = 1; i <= op; i++)
        {
            cout << l << " " << r << "\n";
            l += 3;
            r -= 3;
        }
    }
}
