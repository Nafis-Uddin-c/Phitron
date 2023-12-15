#include <bits/stdc++.h>
using namespace std;
int google(char a[], int i)
{
    if(a[i] == '\0') return 0;
    int l = google(a, i+1);
    return l+1;
}
int main()
{
    char a[7]  = "GOOGLE";
    int length = google(a, 0);
    cout<<length;
    
    return 0;
}