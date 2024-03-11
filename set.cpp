#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <set>

using namespace std;

int main()
{
    set<int> set1{5,4,3,2,1,1};
    cout << "size: "<< set1.sizeof() << endl;

    set1.insert(0);
    set<int>::iterator it = set1.begin();
    it++;
    cout << "2nd: "<< *it << endl;
    set1.erase(5);
    it = set1.end();
    advance(it,-2);
    set1.erase(it,set1.end());

    int arr[] = {6,7,8,9};
    set1.insert(arr,arr+4);

    auto val = set1.find(6);
    cout << "Found: "<< *val << endl;

    auto eight = set1.lower_bound(8);
    cout << "8 "<< *eight << endl;

    for (int i:set1)
        cout << i << endl;
}