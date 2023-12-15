#include <bits/stdc++.h>
using namespace std;
int * google()
{
    int * a = new int[5];
    for(int i = 0; i<5; i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int * a = google();

    for(int i = 0; i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    delete[] a;
    return 0;
}
/*
input
2 4 2 5 6 
output
2 4 2 5 6 
*/