#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

template <typename T, typename U>
class Person{
    public:
        T height;
        U weight;
        static int numOfPeople;
        Person(T h,U w){
            height=h;
            weight=w;
            numOfPeople++;
        }
        void GetData(){
            cout <<"Height: "<< height<< "and weight: "<< weight<< endl;
        }
};
template<typename T, typename U>int Person<T, U>::numOfPeople;

int main()
{
    Person<double,int> UhuruKenyatta(6.33,5.28);
    UhuruKenyatta.GetData();
    cout << "Number of people: "<< UhuruKenyatta.numOfPeople << endl;

    return 0;
}