#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 1;
    cin >> n;

    if(n == 1)
        flag = 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
