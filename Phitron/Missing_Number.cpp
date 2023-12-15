#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int missing_number;
    for(int i = 0; i<n; i++)
    {
        int sum, a, b, c;
        cin>>sum>>a>>b>>c;
        missing_number = sum - (a+b+c);
        cout<<missing_number<<endl;
    }
    
    return 0;
}