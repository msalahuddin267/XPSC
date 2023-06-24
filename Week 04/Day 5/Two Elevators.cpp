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
        long long a, b, c, first, second;
        cin >> a >> b >> c;

        first = a - 1;
        if(b > c)
            second = b - 1;
        else
            second = (c - b) + (c - 1);

        if(first < second)
            cout << "1\n";

        else if(second < first)
            cout << "2\n";

        else
            cout << "3\n";
    }
}
