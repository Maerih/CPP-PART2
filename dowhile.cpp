#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess =0;
    do {
        cout << "Guess the number: ";
        cin >> guess;
        if(guess > secretNum) cout << "Too big My brother\n";
        if(guess < secretNum) cout << "Too small/n";
        cout << "answer is: " << secretNum << endl;
    }while(secretNum != guess);
    cout << "Your gessed it" << endl;

    return 0;
}