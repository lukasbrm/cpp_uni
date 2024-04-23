#include <iostream>

using namespace std;
int main()
{
    // Integer Calculations
    int x = 5;
    int y = 10;
    cout << "x * y: " << x * y << endl;
    cout << "x / y: " << x / y << endl; // Because x and y are integers, the result is also an integer
    cout << "x + y: " << x + y << endl;
    cout << "x - y: " << x - y << endl;

    // Float Calculations
    float a = 10.555;
    float b = 1.255547666;
    cout << "a * b: " << a * b << endl;
    cout << "a / b: " << a / b << endl;
    cout << "a + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;

    // Double Calculations (64 bit instead oft float's 32 bit --> more precise with smaller numbers)
    double c = 10.555;
    double d = 1.255547666;
    cout << "c * d: " << c * d << endl;
    cout << "c / d: " << c / d << endl;
    cout << "c + d: " << c + d << endl;
    cout << "c - d: " << c - d << endl;

}