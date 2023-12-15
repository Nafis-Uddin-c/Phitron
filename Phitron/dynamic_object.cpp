#include <bits/stdc++.h>
using namespace std;
class group
{
    public:
        int Student_Org;
        int members;
        char type;
        string leader;
    
    group(int so, int m, char t, string l)
    {
        Student_Org = so;
        members = m;
        type = t;
        leader = l;
    }
};
int main()
{
    group * utd = new group(32, 120, 'E', "John Cole");
    group * uta = new group(22, 300, 'E', "Albert Steep");


    cout<<"Utd Leader - "<<utd->leader<<endl<<"Uta Leader - "<<uta->leader;
    delete uta;
    return 0;
}

/*
Utd Leader - John Cole
Uta Leader - Albert Steep
*/