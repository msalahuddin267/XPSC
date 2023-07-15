#include<bits/stdc++.h>
using namespace std;

int main()
{
    string txt, pat;
    cin >> txt >> pat;

    int n = txt.size();
    int k = pat.size();
    int i = 0, j = 0, ans = 0;
    int freq1[26] = {0}, freq2[26] = {0};

    for(char ch : pat)
        freq1[ch-'a']++;

    while(j < n)
    {
        freq2[txt[j]-'a']++;
        if(j < k-1)
        {
            j++;
        }
        else
        {
            bool flag = true;
            for(int i = 0; i < 26; i++)
            {
                if(freq1[i] != freq2[i])
                    flag = false;
            }
            if(flag)
                ans++;

            freq2[txt[i]-'a']--;
            i++;
            j++;
        }
    }
    cout << ans << endl;
}
