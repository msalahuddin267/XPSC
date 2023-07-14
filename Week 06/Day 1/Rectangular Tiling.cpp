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
        int w, l;
        cin >> w >> l;

        if((w & 1) && (l & 1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
