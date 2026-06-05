#include <iostream>
using namespace std;
class ComplexNumber {
public:
    double real;
    double imag;
    ComplexNumber add(ComplexNumber c) {
        ComplexNumber r;
        r.real = real + c.real;
        r.imag = imag + c.imag;
        return r;
    }
    ComplexNumber sub(ComplexNumber c) {
        ComplexNumber r;
        r.real = real - c.real;
        r.imag = imag - c.imag;
        return r;
    }
    ComplexNumber mul(ComplexNumber c) {
        ComplexNumber r;
        r.real = (real * c.real) - (imag * c.imag);
        r.imag = (real * c.imag) + (imag * c.real);
        return r;
    }
    void print() {
        cout << real << " + " << imag << "j" << endl; 
    }
};
int main() {
    ComplexNumber c1, c2, result;
    cout << "Enter first complex number (real imag): ";
    cin >> c1.real >> c1.imag;
    cout << "Enter second complex number (real imag): ";
    cin >> c2.real >> c2.imag;
    result = c1.add(c2);
    cout << "Addition: ";
    result.print();
    result = c1.sub(c2);
    cout << "Subtraction: ";
    result.print();
    result = c1.mul(c2);
    cout << "Multiplication: ";
    result.print();
    return 0;
}
