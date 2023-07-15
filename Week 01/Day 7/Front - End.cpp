#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    deque<int> d;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        d.push_back(num);
    }

    while(d.size())
    {
        cout << d.front() << " ";
        d.pop_front();

        if(d.size())
        {
            cout << d.back() << " ";
            d.pop_back();
        }
    }
}
