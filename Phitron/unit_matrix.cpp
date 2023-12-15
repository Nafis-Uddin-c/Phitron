#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin>>row>>col;
    int a[row][col];
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    bool flag = 0;

    if(row != col) flag = 1;
    for(int i = 0; i<row; i++)
    {
        for(int j =0; j<col ; j++)
        {
            if(i == j)
            {
                if(a[i][j] != 1) flag = 1;
            }
            else 
            {
                if(a[i][j] != 0) flag = 1;
            }
        }
    }
    (flag==1)? cout<<"Not unit matrix": cout<<"Unit matrix";
    return 0;
}

/*
input
3 3 
1 0 0 
0 1 0 
0 0 1
output
Unit matrix
*/


/*
input
3 3 
1 0 0 
0 5 0 
0 0 1
ouput
Not unit matrix
*/