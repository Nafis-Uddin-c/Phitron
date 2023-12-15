// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin>>n>>m;
//     int a[n][m];
//     for(int i = 0; i<n; i++)
//     {
//         for(int j =0; j<m; j++)
//         {
//             cin>>a[i][j];
//         }
//     }
//     int row = 1;
//     for(int i = 0; i<m; i++)
//     {
//         cout<<a[row][i]<<" ";
//     }
    
//     return 0;
// }


/* input
2 2
1 4
7 6
output 
7 4
*/

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
    int col = 0;
    for(int i = 0; i<n; i++)
    {
        cout<<a[i][col]<<" ";
    }
    
    return 0;
}

/*
input
2 2
1 4
7 6
output
1 7
*/
