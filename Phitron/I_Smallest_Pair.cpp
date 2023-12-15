#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int z = 0; z<t; z++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        int sum = 0;
        int minimum = INT_MAX;
        for(int i = 0; i<n-1; i++)
        {
            for(int j= i+1; j<n; j++)
            {
                sum = a[i] + a[j] + j - i;
                minimum = min(sum, minimum);
            }
        }
        cout<<minimum<<endl;   // you have to print a new line
    }
    
    return 0;
}

