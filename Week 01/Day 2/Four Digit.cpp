#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, digit = 0, temp;
    cin >> a;
    temp = a;
    while(temp != 0)
    {
        temp = temp / 10;
        digit++;
    }

    if(digit == 0)
        cout << "0000" << endl;
    else if(digit == 1)
        cout << "000" << a << endl;
    else if(digit == 2)
        cout << "00" << a << endl;
    else if(digit == 3)
        cout << "0" << a << endl;
    else
        cout << a << endl;
}
