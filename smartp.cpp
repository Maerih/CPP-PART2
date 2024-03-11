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
    int amtToStore;
    cout << "How many numbers do you want to store? "<<endl;
    cin >> amtToStore;
    int* pNums;
    pNums = (int *)malloc (amtToStore * sizeof(int));
    if(pNums != NULL){
        int i= 0;
        while(i < amtToStore){
            cout << "Enter a number: ";
            cin >> pNums[i];
            i++;
        }
    }
    cout << "You entered these numbers "<< endl;
    for(int i=0;i<amtToStore;i++){
        cout << pNums[i] << endl;
    }
    delete pNums;
}