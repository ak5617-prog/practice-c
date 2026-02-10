#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend Complex sumcomplex(Complex o1, Complex o2);
    void display()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};

Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{

    Complex c1, c2, sum;
    c1.setdata(4, 1);
    c1.display();
    c2.setdata(5, 8);
    c2.display();

    sum = sumcomplex(c1, c2);
    sum.display();
}
