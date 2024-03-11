#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    double num3=10, num4=0;
    try{
        if(num4==6) 
        {
            throw "Divison by zero error";
        }
        else printf("%.1f/ %.1f", num3,(num3/num4));
    }
    catch(const char* exp)
    {
        cout << "Error: "<< exp << endl;
    }
}