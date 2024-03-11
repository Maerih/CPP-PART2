#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <set>
#include <map>

using namespace std;

int main()
{
    map<int,string> map1;
    map1.insert(pair<int,string>(1,"Maerih"));
    map1.insert(pair<int,string>(2,"Omondi"));
    map1.insert(pair<int,string>(3,"Wambui"));
    map1.insert(pair<int,string>(4,"kigen"));


    auto match = map1.find(1);
    cout << match-> second << endl;

    auto maeri = map1.lower_bound(1);
    cout << "KG: "<< maeri->second << endl;
    auto omondi = map1.upper_bound(1);
    cout << "UB "<< omondi->second << endl;

    map<int,string>::iterator it2;

    for(it2=map1.begin(); it2!=map1.end(); ++it2){
        cout << "Key "<< it2 ->first << endl;
        cout << "Value "<< it2->second << endl;
    }
    return 0;
}