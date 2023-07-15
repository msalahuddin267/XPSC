#include<bits/stdc++.h>
using namespace std;

bool is_prime(int num)
{
    if(num == 1)
        return false;

    bool flag = true;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag)
        return true;
    else
        return false;
}

int main()
{
    int n, ans = 0;
    cin >> n;

    for(int i = 6; i <= n; i++)
    {
        int p = 0;
        for(int j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                if(is_prime(j))
                    p++;
            }
        }
        if(p == 2)
            ans++;
    }

    cout << ans << "\n";
}
