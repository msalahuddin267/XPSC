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
        int a, b;
        cin >> a >> b;

        int team = (a + b) / 4;
        int mn = min(a, b);

        if(team <= mn)
            cout << team << "\n";
        else
            cout << mn << "\n";
    }
}
