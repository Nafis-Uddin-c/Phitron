#include <bits/stdc++.h>
using namespace std;
void hello(int a[], int n, int i)
{
    if(i == n) return;
    cout<<a[i]<<" ";
    hello(a, n, i+1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 1; i<=n; i++)
    {
        cin>>a[i];
    }
    hello(a, n, 0);
    
    return 0;
}