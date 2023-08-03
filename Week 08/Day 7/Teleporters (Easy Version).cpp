#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,c,i,ans=0;
        cin>>n>>c;

        vector<long long int>v(n+1);
        for(i=1; i<=n; i++)
            cin>>v[i];

        for(i=1; i<=n; i++)
            v[i]=v[i]+i;

        sort(v.begin(),v.end());
        for(i=1; i<=n; i++)
        {
            int now = v[i];
            if(c>=now)
            {
                c = c-now;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
