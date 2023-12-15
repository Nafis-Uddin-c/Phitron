#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    
    for(int i = 0; i<test; i++)
    {
        int b, h;
        cin>>b>>h;
        float right_triangle = sqrt(pow(b, 2) + pow(h, 2));
        // if(right_triangle)
        cout<<right_triangle;
        // if(b<=h) cout<<"No"<<endl;
        // else cout<<"No"<<endl;
    }
    
    return 0;
}