#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    if(n == 1)
    {
        cout << "0\n";
        return 0;
    }

    int evn = 0, odd = 0, sim = 1;

    for(int i = 0; i < n-1; i++)
    {
        if(v[i] == v[i+1])
            sim++;
        else
            break;
    }

    if(sim == n)
    {
        cout << "0\n";
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        if(v[i] % 2 == 0)
            evn++;
        else
            odd++;
    }

    if(evn > odd)
        cout << odd << "\n";
    else
        cout << evn << "\n";
}

