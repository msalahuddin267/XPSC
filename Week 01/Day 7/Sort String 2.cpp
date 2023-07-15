#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char ch[n];
    for(int i = 0; i < n; i++)
        cin >> ch[i];

    for(char i = 'a'; i <= 'z'; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == ch[j])
                cout << i;
        }
    }
}
