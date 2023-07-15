#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mini = INT_MAX, ans = 0;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < mini)
            mini = a[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == mini)
            ans++;
    }

    if(ans % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;
}
