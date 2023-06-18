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
        string s;
        cin >> n >> s;

        for(int i = 0; i < n; i++)
        {
            string temp = s;
            int j = 0, k = i+1, f = 0, l = n-1, run;
            if(temp.size() % 2 == 0)
                run = temp.size() / 2;
            else
                run = temp.size() / 2 + 1;

            while(1)
            {
                if(j==k)
                    break;
                if(f < run)
                {
                    if(temp[f]=='L')
                    {
                        temp[f]='R';
                        j++;
                        f++;
                    }
                    else
                        f++;
                }

                if(j==k)
                    break;
                if(l > run-1)
                {
                    if(temp[l]=='R')
                    {
                        temp[l]='L';
                        j++;
                        l--;
                    }
                    else
                        l--;
                }

                if(f > run-1 && l < run)
                    break;
            }
            long long sum = 0;
            for(int i = 0; i < n; i++)
            {
                if(temp[i] == 'L')
                    sum += i;

                if(temp[i] == 'R')
                    sum += n-1-i;
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
}

