#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i == j)
            {
                sum += a[i][j];
            }
            if(i+j == (n-1)) // there should be if not else if
            {
                sum -= a[i][j];
            }
        }
    }
    
    cout<<abs(sum);
    return 0;
}