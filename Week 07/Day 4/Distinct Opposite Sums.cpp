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
        int n;
        cin >> n;

        for(int i = 1; i <= n/2; i++)
        {
            if(i % 2 == 0)
                cout << i << " ";
        }
        for(int i = 1; i <= n/2; i++)
        {
            if(i % 2 == 1)
                cout << i << " ";
        }
        for(int i = n/2+1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}
