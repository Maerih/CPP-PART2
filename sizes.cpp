#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int imGlobal =0;
const double PI = 3.41;

int main()
{
    cout << "Hello Kenya!!"<< endl;

    bool married = true;
    char myGrade = 'A';
    short int smallNum =10;

    cout << "Min Unsigned Short Int: "<< numeric_limits<unsigned short int>::min()<<endl;
    cout << "Max Unsigned Short int: "<< numeric_limits<unsigned short int>::max()<< endl;
    cout << "Min short int: "<< numeric_limits<short int>::min()<< endl;
    cout << "Max short int: "<< numeric_limits<short int>::max()<< endl;
    cout << "min int: "<< numeric_limits<int>::min()<<endl;
    cout << "Max int: "<< numeric_limits<int>::max()<<endl;
    cout << "Min Long int: "<< numeric_limits<long int>::min()<<endl;
    cout << "Max Long int: "<< numeric_limits<long int>::max()<<endl;

    cout << "Min float: "<< numeric_limits<float>::min()<< endl;
    cout << "Max float: "<< numeric_limits<float>::max()<< endl;
    cout << "Min Double: "<< numeric_limits<double>::min()<< endl;
    cout << "Max Double: "<< numeric_limits<double>::max()<< endl;
    cout << "Min Long Double: "<< numeric_limits<long double>::min()<< endl;
    cout << "Max Long Double: "<< numeric_limits<long double>::max()<< endl;

    cout << "Min signed Short int: "<< numeric_limits<signed short int>::min()<< endl;


    return 0;
}