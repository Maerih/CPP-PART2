#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    enum day{Mon=1,Tues,Wed,Thur,Fri};
    enum day tuesday = Tues;
    cout << "Tuesday is the "<< tuesday<< "nd day of the week"<< endl;

    for(int i=Mon;i<Fri;i++){
        cout << ""<<i << endl;
    }
}