#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

//using namespace std;
using std::cout;

int main()
{
    string sAge;
    cout << "Enter Your age: ";
    cin >> sAge;
    int nAge = stoi(sAge);

    if ((nAge >= 1)&&(nAge <= 18))
    {
        cout << "No entry to the Kenya Kwanza Party"<< endl;
    }
    else if((nAge == 21) || (nAge == 22))
    {
        cout << "Youth to disrupt party!" << endl;
    }
    else
    {
        cout << "Official Entry visitors";
    }

    return 0;

}