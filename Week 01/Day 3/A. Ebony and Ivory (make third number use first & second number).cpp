#include<bits/stdc++.h>
using namespace std;

bool make_c(int n1, int n2, int k)
{
    if(k == 0)
        return true;
    if(k < 0)
        return false;

    bool ans1 = make_c(n1, n2, k - n1);
    bool ans2 = make_c(n1, n2, k - n2);

    bool ans = ans1 || ans2;
    return ans;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(make_c(a, b, c))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
