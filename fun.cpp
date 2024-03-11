#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

double Addnumbers(double num1, double num2);

int main(int argc, char** argv)
{
    printf("%.1f + %.1f = %.1f",5.0,4.0,Addnumbers(5,4));

    return 0;
}

double Addnumbers(double num1=0, double num2=0)
{
    return num1 + num2;
}