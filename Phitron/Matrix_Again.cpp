#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0; i<m; i++)
    {
        cout<<a[n-1][i]<<" ";
    }
    cout<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<a[i][m-1]<<" ";
    }
    
    return 0;
}