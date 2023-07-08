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

        if(n % 2 == 0)
        {
            for(int i = n; i > 0; i--)
                cout << i << " ";
        }
        else
        {
            if(n == 3)
                cout << "-1\n";
            else
            {
                int mid = n / 2 + 1;
                for(int i = mid+1; i <= n; i++)
                    cout << i << " ";
                for(int i = 1; i <= mid; i++)
                    cout << i << " ";
            }
        }
        cout << "\n";
    }
}

