#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <deque>

using namespace std;

int main()
{
    deque<int> nums ={1,2,3,4,5};
    nums.push_front(0);
    nums.push_back(6);
    for(int x: nums){
        cout << x << endl;
    }

    cout << nums[0]<< endl;

    return 0;
}