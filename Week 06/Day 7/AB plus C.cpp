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
        long long n;
        cin >> n;

        long long a, b, c, root;

        if(n == 1)
            cout << "-1\n";
        else
        {
            root = sqrt(n);

            if(root * root == n)
            {
                a = root - 1;
                b = root - 1;
                c = n - a * b;
            }
            else
            {
                a = root;
                b = root;
                c = n - a * b;
            }
            if(c > 1000000)
            {
                while(c > 1000000)
                {
                    a++;
                    c = n - a * b;
                }
            }
            cout << a << " " << b << " " << c << "\n";
        }
    }
}
