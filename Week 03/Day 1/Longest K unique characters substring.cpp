#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;

    int n = s.size(), i = 0, j = 0, ans = -1, unq = 0;
    int freq[26] = {0};

    while(j < n)
    {
        char ch = s[j];

        if(freq[ch-'a'] == 0)
            unq++;

        freq[ch-'a']++;

        if(unq > k)
        {
            while(unq > k)
            {
                char ch = s[i];
                freq[ch-'a']--;
                i++;

                if(freq[ch-'a'] == 0)
                    unq--;
            }
        }

        if(unq == k)
        {
            ans = max(ans, j-i+1);
        }
        j++;
    }

    cout << ans << "\n";
}
