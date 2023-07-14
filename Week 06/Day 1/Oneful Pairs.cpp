#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    int num = a + b + (a * b);
    string s = to_string(num);
    bool flag = true;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != '1')
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}
