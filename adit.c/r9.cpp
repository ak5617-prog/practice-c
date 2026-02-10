#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;

    public:
    void setdata(int v1, int v2){
         a=v1;
         b=v2;
    }
    void comp(Complex o1,Complex o2){
        a= o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void result(){
        cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2,c3;
 c1.setdata(1,2);
    c1.result();

     c2.setdata(3,4);
    c2.result();

    c3.comp(c1,c2);
    c3.result();


   return 0;
}
