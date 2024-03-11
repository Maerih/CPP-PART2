#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int ival = 50;
    int *p = &ival;
    int t = 44;
    int *q = &t;

    cout << p << endl;
    cout << *p << endl;
    cout << q << endl;
}