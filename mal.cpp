#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <memory>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    int amToStore;
    cout << "How many numbers do you want to store?"<<endl;
    cin >> amToStore;
    unique_ptr<int[]> pNums(new int[amToStore]);
    if(pNums != NULL){
        int i=0;
        while(i < amToStore){
            cout << "Enter a Number: ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "YOu entered these numbers: "<< endl;
    for(int i=0;i< amToStore;i++){
        cout << pNums[i]<< endl;
    }
    return 0;
}