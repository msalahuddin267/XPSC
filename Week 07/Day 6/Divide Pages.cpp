#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum = 0;
        cin >> n;

        for(int i =0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        cout << (sum & 1 ? "NO\n" : "YES\n");
    }
    return 0;
}
