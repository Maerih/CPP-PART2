#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned int num = -1;
    signed int num2 = -1;
    int x = num;
    int y = num2;
    cout << num << ", "<< x<< endl;
    cout << num2 << ", "<< sizeof(y);
    return 0;
}