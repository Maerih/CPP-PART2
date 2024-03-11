#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <deque>
#include <iterator>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    vector<int> nums2 = {1,2,3,4};
    vector<int>::iterator itr;
    for(itr = nums2.begin();
        itr <nums2.end();
        itr++){
            cout << *itr << endl;
        }

    vector<int>::iterator itr2 = nums2.begin();
    advance(itr2,2);
    cout << *itr2 << endl;
    auto itr3 = next(itr2,1);
    cout << *itr3 << endl;
    auto itr4 = prev(itr2,1);
    cout << *itr4 << endl;

    vector<int> nums3 = {1,4,5,6};
    vector<int> nums4= {2,3};
    auto itr5 = nums3.begin();
    advance(itr5,1);
    copy(nums4.begin(),nums4.end(),inserter(nums3,itr5));

    for(int &i: nums3)
        cout << i << endl;
}