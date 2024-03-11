#include <cstdlib>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<string> cast;
    cast.push("Mombasa");
    cast.push("Nakuru");

    int size = cast.size();
    if(!cast.empty()){
        for(int i=0;i<size;i++){
            cout << cast.front()<< endl;
            cast.pop();
        }
    }
    return 0;
}