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

        cout << (x * 15 >= y * 2 ? "Yes\n" : "NO\n");
    }
    return 0;
}

