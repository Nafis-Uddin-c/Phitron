#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt[26] = {0};
    for(int i = 0; i<n; i++)
    {
        char s;
        cin>>s;
        cnt[s-'a']++;
    }

    for(int i = 0; i<26; i++)
    {
        while(cnt[i] != 0)
        {
            cout<<char(i+'a');
            cnt[i]--;
        }
    }
    
    return 0;
}
