#include <bits/stdc++.h>
using namespace std;
int main()
{
    int capital = 0, small = 0, spaces = 0;
    string s;
    getline(cin, s);
    for(int i = 0; i<s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z') small++;
        else if(s[i] >= 'A' && s[i] <= 'Z') capital++;
        else if(s[i] == ' ') spaces++;
    }
    cout<<"Capital - "<<capital<<endl<<"Small - "<<small<<endl<<"Spaces - "<<spaces;
    
    return 0;
}