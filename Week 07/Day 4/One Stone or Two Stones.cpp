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
        int x, y;
        cin >> x >> y;

        if(x < y)
        {
            int dif = y - x;
            if(x % 2 == 0)
                cout << "CHEFINA\n";
            else
            {
                if(dif == 1)
                    cout << "CHEF\n";
                else
                    cout << "CHEFINA\n";
            }
        }
        else if(x > y)
        {
            int dif = x - y;
            if(y & 1)
                cout << "CHEF\n";
            else
            {
                if(dif == 1)
                    cout << "CHEFINA\n";
                else
                    cout << "CHEF\n";
            }

        }
        else
        {
            if(x & 1)
                cout << "CHEF\n";
            else
                cout << "CHEFINA\n";
        }
    }
}
