#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int freq[m+1] = {0};
    for(int i = 1; i <= n; i++)
    {
        if(a[i] <= m)
            freq[a[i]]++;
    }

    for(int i = 1; i <= m; i++)
        cout << freq[i] << endl;
}
