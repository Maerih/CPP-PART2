#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int age2 = 43;
    int *pAge2 = NULL;
    pAge2 = &age2;
    cout << "value: "<< *pAge2 << endl;
    cout << "Address: "<< pAge2 << endl;

    int intArray []={1,2,3,4};
    int* pIntArray = intArray;
    cout << "1st: "<< pIntArray <<endl;

    pIntArray++;
    cout << "2nd: "<< pIntArray << endl;

    return 0;
}