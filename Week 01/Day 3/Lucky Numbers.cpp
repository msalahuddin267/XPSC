#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    bool flag1 = false;
    for(int i = a; i <= b; i++)
    {
        bool flag2 = true;
        int temp = i;
        while(temp != 0)
        {
            int rem = temp % 10;

            if(rem == 4 || rem == 7)
            {
                temp = temp / 10;
            }
            else
            {
                flag2 = false;
                break;
            }
        }
        if(flag2)
        {
            cout << i << " ";
            flag1 = true;
        }
    }
    if(flag1==false)
        cout << "-1";
}
