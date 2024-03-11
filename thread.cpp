#include <cstdlib>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>

using namespace std;

int GetRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

void ExecuteThread(int id){
    auto nowTime = chrono::system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime);
    tm myLocaltime = *localtime(&sleepTime);
    cout << "Thread "<<id << "Sleep time: "<< ctime(&sleepTime) <<endl;

    cout << "Month: "<< myLocaltime.tm_mon << endl;
    cout << "Day: "<< myLocaltime.tm_mday <<endl;
    cout << "year: "<< myLocaltime.tm_year <<endl;

    this_thread::sleep_for(chrono::seconds(GetRandom(3)));
    nowTime = chrono::system_clock::now();
    sleepTime = chrono::system_clock::to_time_t(nowTime);
    cout << "Thead: "<< id << "Awake Time: "<< ctime(&sleepTime) << endl;
}

int main()
{
    thread th1(ExecuteThread,1);
    th1.join();

    thread th2(ExecuteThread,1);
    th2.join();

    cout << "main thread:";
    return 0;
}