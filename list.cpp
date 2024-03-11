#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <ctime>
#include <list>

using namespace std;

int main()
{
    int arr[16]{1,2,3,9,4,5,3,5,7,9,2,1};
    list<int> list1;
    list1.insert(list1.begin(),arr,arr+5);
    cout << "list1: "<< endl;
    for(int li : list1){
        cout << " "<<li<< endl;
    }
    list1.remove(4);
    cout << "list1: "<< endl;
    for(int li : list1){
        cout << " "<<li<< endl;
    }
}