#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

template<typename T>

T Add(T val, T val2){
    return val + val2;
}

int main(int argc, char** argv)
{
    cout << "5+4= " << Add(5,4) << endl;
    cout << "5.6+3.4="<< Add(5.6,3.4)<< endl;
}