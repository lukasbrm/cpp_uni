#include <iostream>

using namespace std;

// Function
int sumOfSquares(int n)
{
    int sum = 0;
    
    // Do input checks
    if(n < 1)
    {
        if(n == 0)
        {
            return 0;
        }
        else
        {
            n = n * -1;
        }
    }

    // Calculate sum of squares
    for(int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter a number: " << flush;
    cin >> n;
    cout << "Sum of squares of " << n << " is " << sumOfSquares(n) << endl;
}