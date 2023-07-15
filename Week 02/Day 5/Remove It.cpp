#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    list<int> l;
    for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            l.push_back(num);
        }

    l.remove(x);

    for(auto it : l)
        cout << it << " ";
}
