#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin>>row>>col;
    int a[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int  j= 0;  j<col; j++)
        {
            cin>>a[i][j];
        }
    }

    bool flag = 0;
    if(row != col) flag = 1;
    for(int i = 0;i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(i == j) continue;
            else
            {
                if(a[i][j] != 0) flag = 1;
            }
        }
    }
    
    (flag == 1)? cout<<"Not primary Diagonal" : cout<<"Primary Diagonal";
    return 0;
}


/*
input
3 3
3 0 0
0 7 0 
0 0 2
output
Primary Diagonal
*/

/*
input
3 3
3 0 4
0 7 0 
0 0 2
output
Not primary Diagonal
*/