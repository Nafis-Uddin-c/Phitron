// modify the values of the array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int number[SIZE];

    for (auto & val : number)
        cin >> val;

    for (auto val : number)
        cout << val << endl;

    return 0;
}


// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     int x = 20;
//  int *y = &x;
//  *y = 23;

//     cout << " x is " <<  x << endl;
//     cout << " y is " << y << endl;
//     cout << " y is " <<  &x << endl;
//     cout << " value pointed to by y is " <<  *y << endl;

// }
