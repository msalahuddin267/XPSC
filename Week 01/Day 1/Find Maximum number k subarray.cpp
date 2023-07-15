#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int i = 0, j = 0;
    multiset<int> ms;

    while(j < n)
    {
        ms.insert(arr[j]);
        if(j < k-1)
        {
            j++;
        }
        else
        {
            cout << *ms.rbegin() << " ";
            auto it = ms.find(arr[i]);
            ms.erase(it);
            i++;
            j++;
        }
    }
}
