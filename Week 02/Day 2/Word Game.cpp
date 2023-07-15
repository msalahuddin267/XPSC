#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<string> p1(n);
        vector<string> p2(n);
        vector<string> p3(n);

        int ans1 = 0, ans2 = 0, ans3 = 0;

        for(int i = 0; i < n; i++)
            cin >> p1[i];
        for(int i = 0; i < n; i++)
            cin >> p2[i];
        for(int i = 0; i < n; i++)
            cin >> p3[i];

        for(int i = 0; i < n; i++)
        {
            bool f1 = false;
            for(int j = 0; j < n; j++)
            {
                if(p1[i] == p2[j])
                {
                    f1 = true;
                    break;
                }
            }
            bool f2 = false;
            for(int k = 0; k < n; k++)
            {
                if(p1[i] == p3[k])
                {
                    f2 = true;
                    break;
                }
            }
            if(f1 == false && f2 == false)
                ans1 += 3;
            else if((f1 == true && f2 == false) || (f1 == false && f2 == true))
                ans1 += 1;
        }

        for(int i = 0; i < n; i++)
        {
            bool f1 = false;
            for(int j = 0; j < n; j++)
            {
                if(p2[i] == p1[j])
                {
                    f1 = true;
                    break;
                }
            }
            bool f2 = false;
            for(int k = 0; k < n; k++)
            {
                if(p2[i] == p3[k])
                {
                    f2 = true;
                    break;
                }
            }
            if(f1 == false && f2 == false)
                ans2 += 3;
            else if((f1 == true && f2 == false) || (f1 == false && f2 == true))
                ans2 += 1;
        }

        for(int i = 0; i < n; i++)
        {
            bool f1 = false;
            for(int j = 0; j < n; j++)
            {
                if(p3[i] == p1[j])
                {
                    f1 = true;
                    break;
                }
            }
            bool f2 = false;
            for(int k = 0; k < n; k++)
            {
                if(p3[i] == p2[k])
                {
                    f2 = true;
                    break;
                }
            }
            if(f1 == false && f2 == false)
                ans3 += 3;
            else if((f1 == true && f2 == false) || (f1 == false && f2 == true))
                ans3 += 1;
        }
        cout << ans1 << " " << ans2 << " " << ans3 << "\n";
    }
}
