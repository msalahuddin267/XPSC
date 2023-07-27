#include <iostream>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll r;
        cin >> r;

        r = r * 1000;
        r = r / 2;
        cout << r / 5 << "\n";
    }
    return 0;
}

