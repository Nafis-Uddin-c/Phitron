#include <bits/stdc++.h>
using namespace std;
void hello(int n)
{
    if(n == 0) return;
    cout<<"I love Recursion"<<endl;
    hello(n-1);
}
int main()
{
    int n;
    cin>>n;
    hello(n);
    
    return 0;
}