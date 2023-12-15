#include <bits/stdc++.h>
using namespace std;
int main()
{
    int google , amazon;
    cin>>google>>amazon;
    
    swap(amazon, google);
    cout<<google<<" "<<amazon<<endl;
    
    int maximum = max(amazon, google);
    int minimum = min(amazon, google);
    
    cout<<maximum<<" "<<minimum;

    return 0;
}

/*
input
44 22
output
22 44
44 22
*/