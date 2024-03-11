#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <ctime>


using namespace std;

#define PI 3.1214
#define AREA_CIRCLE(radius)(PI * pow(radius,2))

int main(int argc,char** argv){
    cout << "Circle Area: "<< AREA_CIRCLE(5) << endl;
    return 0;
}