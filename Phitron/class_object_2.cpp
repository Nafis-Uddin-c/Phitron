#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
        int cls;
        int roll;
        char sec;
        string name;
        student(int c, int r, char s, string n)
        {
            roll = r;
            cls = c;
            sec = s;
            name = n;
        }
};
int main()
{
    student karim(3, 20, 'B', "Karim King");
    student rahim(3, 23, 'B', "Rarim Rock");
    

    cout<<karim.name<<" "<<karim.sec<<endl;
    cout<<rahim.name<<" "<<rahim.sec<<endl;
    return 0;
}