#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;

        int f = 100 - a;
        int s = 200 - 2 * b;

        if(f < s)
            cout << "FIRST\n";
        else if(f > s)
            cout << "SECOND\n";
        else
            cout << "BOTH\n";
    }
    return 0;
}
