#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    string str1 = "I am from Nairobi, Kenya";
    cout << "1st: " << str1[0] << endl;
    cout << "last: " << str1.back() << endl;
    cout << "Length: " << str1.length() << endl;
    string str2 = str1;
    string str3(str2,4);
    string str4 = str1 + "and You are from Kampala, Uganda";
    str4.append("!");
    cout << "concat String: " << str4 << endl;
    //str4.erase(12, str4.length() - 1);
    cout << "New String: " << str4 << endl;
    cout << "our 3rd string: "<< str3 << endl;

    if(str4.find("Kenya") != string::npos)
     cout << "String Index: "<< str4.find("Kenya") << endl;


    cout << "Substring: "<< str4.substr(6,6) << endl;

    string strNum = to_string(1+2);
    cout << "I am a string: " << strNum << endl;

    char letterZ = 'z';
    char num5 = '5';
    char aSpace = ' ';
    cout << "Is z a letter or number: " << isalnum(letterZ) << endl;
    cout << "Is Z a letter: " << isalpha(letterZ) << endl;
    cout << "Is 5 a number: " << isdigit(num5) << endl;
    cout << "Is space a space: " << isspace(aSpace) << endl;

    return 0;
}