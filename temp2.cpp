#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

template <typename T>
void Times2(T val){
    cout << val << "*2"<< val*2 << endl;
}

int main(int argc,char** argv)
{
    Times2(4);
    Times2(203.9);
    return 0;

}