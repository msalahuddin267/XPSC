#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> num(4);
    for(int i = 0; i < 4; i++)
        cin >> num[i];

    sort(num.begin(), num.end());
    cout << num[3]-num[2] << " " << num[3]-num[1] << " " << num[3]-num[0] << "\n";
}
