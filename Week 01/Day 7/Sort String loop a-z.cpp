#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(char i = 'a'; i <= 'z'; i++)
    {
        for(int j = 0; j < s.size(); j++)
        {
            if(i == s[j])
                cout << i;
        }
    }
}
