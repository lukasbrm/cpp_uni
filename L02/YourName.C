#include <iostream>

using namespace std;
int main()
{
    string yourName;

    cout << "What is your name?   " << flush;
    cin >> yourName;

    cout << "Hello, " << yourName << "!" << endl;
}