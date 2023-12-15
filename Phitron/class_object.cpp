#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
        int cls;
        int roll;
        char sec;
        string subject = "Computer Science";
};
int main()
{
    student rahim;
    rahim.cls = 3;
    rahim.roll = 33;
    rahim.sec = 'a';
    
    student karim;
    karim.cls = 5;
    karim.sec = 'd';

    cout<<rahim.roll<<" "<<karim.sec;
    
    return 0;
}