#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

double AddNumbers(double num1, double num2);
void AssignAge3(int *pAge);

int main()
{
    int age22 = 22;
    AssignAge3(&age22);
    cout << age22;

    return 0;
}

double AddNumbers(double num1=0, double num2=0)
{
    return num1 + num2;
}

void AssignAge3(int *pAge)
{
    *pAge = 33;
}