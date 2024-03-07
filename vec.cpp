#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>

using namespace std;

int main()
{
    vector<int> vNums(2);
    vNums[1] = 3;
    vNums[0] = 1;
    vNums.push_back(4);
    cout<< "Vector size: "<< vNums.size();
}