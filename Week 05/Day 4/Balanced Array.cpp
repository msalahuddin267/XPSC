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

        int num = n / 2;

        if(num % 2 == 0)
        {
            cout << "YES\n";
            int evn = 0, od = 0, e_dig = 0, o_dig = -1;

            for(int i = 0; i < num; i++)
            {
                e_dig += 2;
                cout << e_dig << " ";
                evn += e_dig;
            }

            for(int i = 0; i < num-1; i++)
            {
                o_dig += 2;
                cout << o_dig << " ";
                od += o_dig;
            }
            cout << evn - od << "\n";
        }

        else
            cout << "NO\n";
    }
}

