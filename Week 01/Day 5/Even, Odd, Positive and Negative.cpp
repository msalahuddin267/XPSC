#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int evn = 0, odd = 0, pos = 0, neg = 0;

    for(int i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        if(value % 2 == 0)
            evn++;

        if(value % 2 != 0)
            odd++;

        if(value > 0)
            pos++;

        if(value < 0)
            neg++;
    }
    cout << "Even: " << evn << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}
