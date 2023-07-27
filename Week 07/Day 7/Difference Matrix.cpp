#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        int cnt = 0;
        for(int i = 2; i <= n * n; i += 2)
        {
            cout << i << " ";
            cnt++;
            if(cnt == n)
            {
                cout << "\n";
                cnt = 0;
            }
        }

        cnt = 0;
        for(int i = 1; i <= n * n; i += 2)
        {
            cout << i << " ";
            cnt++;
            if(cnt == n)
            {
                cout << "\n";
                cnt = 0;
            }
        }
        cout << "\n";
    }
    return 0;
}
