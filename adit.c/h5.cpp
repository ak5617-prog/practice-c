#include <iostream>
using namespace std;

class Complex;

class calculator
{
public:
    int sumrealdata(Complex, Complex);
    int sumcompdata(Complex, Complex);
};
class Complex
{
    int a, b;

    // friend int calculator :: sumdata(Complex, Complex); // to make particular member function of class a friend of this class
    friend class calculator; // to make whole class friend of this class
public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumrealdata(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompdata(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setdata(4, 1);
    c1.display();

    c2.setdata(5, 2);
    c2.display();

    calculator calc;
    int res = calc.sumrealdata(c1, c2);
    cout << "the sum of real part is " << res << endl;

    int resc = calc.sumcompdata(c1, c2);
    cout << "the sum of imaginary part is " << resc;

    return 0;
}