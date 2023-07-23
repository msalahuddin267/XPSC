#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if(n == 1)
        cout << "a";
    else if(n == 2)
        cout << "aa";
    else
    {
        int take;
        string ans;

        if(n & 1)
            take = n / 2 + 1;
        else
            take = n / 2;

        for(int i = 1; i <= take; i++)
        {
            if(i & 1)
                ans += "aa";
            else
                ans += "bb";
        }

        for(int i = 0; i < n; i++)
            cout << ans[i];
    }
}
