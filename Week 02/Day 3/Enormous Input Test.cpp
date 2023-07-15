#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, ans = 0;
    cin >> n >> k;

    while(n--)
    {
        int num;
        cin >> num;
        if(num % k == 0)
            ans++;
    }
    cout << ans << "\n";
}
