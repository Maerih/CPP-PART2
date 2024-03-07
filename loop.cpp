#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int i=1;

    while (i<=20){
        if((i % 2)==0){
            i +=1;
            continue;
        }
        if(i==15) break;
        cout << i << endl;
        i +=1;
    }
    return 0;
}