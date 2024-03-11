#include <cstdlib>
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<string> custs;
    custs.push("Maeri");
    custs.push("Kigen");
    custs.push("Kenyatta");
    custs.push("Marley");

    cout << "Size: "<< custs.size()<< endl;
    if(!custs.empty()){
        for(int i=0;i<custs.size();i++){
            cout<< custs.top() << endl;
            custs.pop();
        }
    }
}