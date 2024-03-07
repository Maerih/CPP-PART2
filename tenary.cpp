#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int age43 = 43;
    bool canVote = (age43 >=18) ? true :false;
    //cout.setf(ios::boolalpha);
    cout << "Can William Ruto vote: " << canVote <<endl;

    return 0;
}