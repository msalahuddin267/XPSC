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
        int r1c1, r1c2, r2c1, r2c2;
        cin >> r1c1 >> r1c2 >> r2c1 >> r2c2;

        int op = 0;
        bool flag = false;

        while(op != 4)
        {
            if(r1c1 < r1c2 && r2c1 < r2c2 && r1c1 < r2c1 && r1c2 < r2c2)
            {
                flag = true;
                break;
            }

            int t1 = r1c1, t2 = r1c2, t3 = r2c2, t4 = r2c1;

            r1c1 = t4;
            r1c2 = t1;
            r2c2 = t2;
            r2c1 = t3;

            op++;
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}


