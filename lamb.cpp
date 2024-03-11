#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <sstream>
#include <ctime>

using namespace std;

vector<int> GenerateRandVect(int numOfnums,int min, int max);

int main(){
    vector<int> vecVals = GenerateRandVect(10,1,50);
    sort(vecVals.begin(), vecVals.end(),[](int x,int y){return x<y;});
        for(auto val: vecVals) cout << val <<endl;

    vector<int> evenVecVals;
    copy_if(vecVals.begin(),vecVals.end(),back_inserter(evenVecVals), [](int x){return (x%2)==0;});
        for(auto val: evenVecVals) cout << val <<endl;

    return 0;
}

vector<int> GenerateRandVect(int numOfnums,int min, int max){
    vector<int> vecValues;
    srand(time(NULL));
    int i=0, randVal=0;
    while(i < numOfnums){
        randVal = min + rand() % ((max +1)- min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}