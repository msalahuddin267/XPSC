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
        int a, b, c, cnt = 0;
        cin >> a >> b >> c;

        if(a == 1) cnt++;
        if(b == 1) cnt++;
        if(c == 1) cnt++;

        if(cnt >= 2)
            cout << "Not now\n";
        else
            cout << "Water filling time\n";
    }
}


