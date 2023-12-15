#include <bits/stdc++.h>
using namespace std;
long long int hello(long long int a[], long long int n, int i)
{
    if(i >= n) return 0;
    long long int sum = hello(a, n, i+1);
    return a[i] + sum;
}
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    long long int sum = hello(a, n, 0);
    cout<<sum;
    return 0;
}

