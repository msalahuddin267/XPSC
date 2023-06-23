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
        int n, k;
        cin >> n >> k;
        int a[n+1];
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        int i = 1, j = k;
        bool flag = false;

        while(j <= k)
        {
            if(a[i] & a[j] == k)
                flag = true;
            else
            {
                i++;
                j++;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
}




