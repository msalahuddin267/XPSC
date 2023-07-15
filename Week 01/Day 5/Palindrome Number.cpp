#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n, rev_num = 0;

    while(temp != 0)
    {
        int rem = temp % 10;
        temp = temp / 10;
        rev_num = rev_num * 10 + rem;
    }

    cout << rev_num << endl;

    if(n == rev_num)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
