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
        float a, b;
        cin >> a >> b;

        a = a - (a * 10) / 100;

        if(a < b)
            cout << "ONLINE\n";

        else if(a > b)
            cout << "DINING\n";

        else
            cout << "EITHER\n";
    }
}
