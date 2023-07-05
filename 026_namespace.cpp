// C++ program to understand the namespace

#include <iostream>

using namespace std;

namespace one
{
    int num = 10;
}

namespace two
{
    int num = 20;
}

int main()
{
    // cout << "num = " << num << endl;
    cout << "num = " << one :: num << endl;
    cout << "num = " << two :: num << endl;
    return 0;
}
