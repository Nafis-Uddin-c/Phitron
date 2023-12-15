#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin>>m>>n;
    int a[m][n];
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int number;
    cin>>number;
    bool flag = 0;
    for(int i =0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(a[i][j] == number) flag = 1;
        }
    }
    (flag == 1)? cout<<"will not take number": cout<<"will take number";
    return 0;
}