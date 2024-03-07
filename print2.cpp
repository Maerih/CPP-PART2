#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(int argc, char** argv)
{
    string q1 = "Enter a number: ";
    string num1, num2;
    cout << q1;
    cin >> num1;
    cout << "Enter Another Number: ";
    cin >> num2;

    int nNum1 = stoi(num1);
    int nNum2 = stoi(num2);

    printf("%d + %d = %d\n",nNum1,nNum2, (nNum1+nNum2));
    printf("%d * %d = %d\n",nNum1,nNum2, (nNum1*nNum2));

    return 0;

}

