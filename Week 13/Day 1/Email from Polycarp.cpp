#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;

        map<char, int> ma, mb;

        for(int i = 0; i < a.size(); i++)
            ma[a[i]]++;

        for(int i = 0; i < b.size(); i++)
            mb[b[i]]++;

        for(auto [x, y] : ma)
        {
            //if(mb.find(x) != )
        }
    }
}
