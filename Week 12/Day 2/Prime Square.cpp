#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(int n)
{
    if(n == 1)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

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

        if(is_prime(n))
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << "1 ";
                }
                cout << "\n";
            }
            cout << "\n";
            continue;
        }

        int num = n + 1;

        while(1)
        {
            if(is_prime(num))
            {
                if(is_prime(num - (n-1)))
                    num++;
                else
                    break;
            }
            else
                num++;
        }

        num -= n - 1;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                    cout << num << " ";
                else
                    cout << "1 ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
