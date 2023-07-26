#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;

        cout << (x * y <= 500 && x <= 8 ? "YES\n" : "NO\n");
    }
    return 0;
}
