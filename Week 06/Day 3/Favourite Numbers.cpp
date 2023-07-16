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
        int a;
        cin >> a;

        if(a % 7 == 0 && a % 2 == 0)
            cout << "Alice\n";
        else if(a % 9 == 0 && a % 2 == 1)
            cout << "Bob\n";
        else
            cout << "Charlie\n";
    }
}
