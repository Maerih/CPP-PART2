#include <cstdlib>
#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string str= "Africa for Africans alone!";
    regex reg("(for)[^]?");
    smatch matches;

    if(regex_search(str,matches,reg)==true){
        cout << matches.size() << "Matches"<< endl;

        while(regex_search(str,matches,reg)){
            cout << matches.str(1)<< endl;
            cout << "At index: "<< matches.position(1)<< endl;

            str=matches.suffix().str();
        }
    }
}