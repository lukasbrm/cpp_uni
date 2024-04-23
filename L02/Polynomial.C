#include <iostream>
#include <complex>

using namespace std;
int main()
{
    cout << "Enter Polynomial of form ax^2 + bx + c" << endl;
    
    string aInput;
    string bInput;
    string cInput;

    cout << "Enter a: " << flush;
    cin >> aInput;

    cout << "Enter b: " << flush;
    cin >> bInput;

    cout << "Enter c: " << flush;
    cin >> cInput;

    
    // Convert input of type "a + bi" to complex number
    complex<double> a;
    if (aInput.find("+") != string::npos && aInput.rfind('i') == aInput.length() - 1) {

        // Remove "i"
        aInput.pop_back();

        // "Split" input into two parts: "real" and "imaginary"
        int pos = aInput.find("+");
        string realPart = aInput.substr(0, pos);
        string imaginaryPart = aInput.substr(pos + 1);

        // Assign values to complex number (stod = string to double)
        a = complex<double>(stod(realPart), stod(imaginaryPart));
    }else
    {
        try
        {
            // If input is of valid format, assign value to complex number
            a = complex<double>(stod(aInput), 0);
        }
        catch(exception e)
        {
            // If input is invalid, stop and print error message
            cout << "Invalid input!" << endl;
            exit(EXIT_FAILURE);
        }
        
    }

    // Convert input of type "a + bi" to complex number
    complex<double> b;
    if (bInput.find("+") != string::npos && bInput.rfind('i') == bInput.length() - 1) {

        // Remove "i"
        bInput.pop_back();

        // "Split" input into two parts: "real" and "imaginary"
        int pos = bInput.find("+");
        string realPart = bInput.substr(0, pos);
        string imaginaryPart = bInput.substr(pos + 1);

        // Assign values to complex number (stod = string to double)
        b = complex<double>(stod(realPart), stod(imaginaryPart));
    }else
    {
        try
        {
            // If input is of valid format, assign value to complex number
            b = complex<double>(stod(bInput), 0);
        }
        catch(exception e)
        {
            // If input is invalid, stop and print error message
            cout << "Invalid input!" << endl;
            exit(EXIT_FAILURE);
        }
        
    }

    // Convert input of type "a + bi" to complex number
    complex<double> c;
    if (cInput.find("+") != string::npos && cInput.rfind('i') == cInput.length() - 1) {

        // Remove "i"
        cInput.pop_back();

        // "Split" input into two parts: "real" and "imaginary"
        int pos = cInput.find("+");
        string realPart = cInput.substr(0, pos);
        string imaginaryPart = cInput.substr(pos + 1);

        // Assign values to complex number (stod = string to double)
        c = complex<double>(stod(realPart), stod(imaginaryPart));
    }else
    {
        try
        {
            // If input is of valid format, assign value to complex number
            c = complex<double>(stod(cInput), 0);
        }
        catch(exception e)
        {
            // If input is invalid, stop and print error message
            cout << "Invalid input!" << endl;
            exit(EXIT_FAILURE);
        }
        
    }


    // Actually calculate the polynomial
    if(!(real(a) == 0 && imag(a) == 0))
    {
        complex<double> p = b / a;
        complex<double> q = c / a;

        complex<double> x1 = -1.0 * (p / 2.0) + sqrt(p * p - q);
        complex<double> x2 = -1.0 * (p / 2.0) - sqrt(p * p - q);

        cout << "x1: " << real(x1) << "+" << imag(x1) << "i" << endl;
        cout << "x2: " << real(x2) << "+" << imag(x2) << "i" << endl;
    } else 
    {
        complex<double> p = b;
        complex<double> q = c;

        complex<double> x1 = (0.0 - q) / p;

        cout << "x1: " << real(x1) << "+" << imag(x1) << "i" << endl;
    }
    
}