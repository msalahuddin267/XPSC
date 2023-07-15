#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int rem = a - b;
    double ans = ((double)rem / a) * 100;
    cout << ans << endl;
}
