#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, ans = 0;
        cin >> a >> b >> c;

        for(int i = 1; i <= a; i++)
        {
            if(i % 2 == 0)
                ans += b;
            else
                ans += c;
        }
        cout << ans << "\n";
    }
    return 0;
}
