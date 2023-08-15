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
        ll n;
        cin >> n;

        ll sum = 0, pg = 1, ng = -1;

        while(sum != n)
        {
            for(int i = 1; ; i++)
            {
                if(i % 2)
                {
                    sum += p;
                    d.push_back(pg);
                }
                else
                {
                    sum += n;
                    d.push_front(ng);
                }
            }
        }
    }
}

