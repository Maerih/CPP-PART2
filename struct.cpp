#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>

using namespace std;

struct Shape{
    double length,width;
    Shape(double l=1, double w=1){
        length = l;
        width = w;
    }
    double Area(){
        return length * width;
    }
private:
    int id;
};
struct Cirlce:Shape{
    Cirlce(double width){
        this -> width = width;
    }
    double Area(){
        return 3.141 * pow((width / 2), 2);
    }
};
int main()
{
    return 0;
}