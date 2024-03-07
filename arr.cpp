#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int arrNum[10] = {1};
    int arrNum2[] = {1,2,3};
    int arrNum3[] = {8,9};
    cout << "1st value: " << arrNum3[0] << endl;
    arrNum3[0] = 7;
    int arrNum4[2][2][2] = {{{1,2},{3,4}}, {{5,6},{7,8}}};
    cout << arrNum4[0][1][1] << endl;


    return 0; 
}