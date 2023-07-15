#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int freq[26] = {0};
    for(int i = 0; i < n; i++)
    {
        freq[s[i]-'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
        {
            for(int j = 0; j < freq[i]; j++)
            {
                char ch = 'a' + i;
                cout << ch;
            }
        }
    }
}
