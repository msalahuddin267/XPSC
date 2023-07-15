#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            reverse(v.begin(), v.end());
            v.push_back(a[i]);
        }
        else
        {
            v.push_back(a[i]);
        }
    }
    for(int it : v)
        cout << it << " ";
}
