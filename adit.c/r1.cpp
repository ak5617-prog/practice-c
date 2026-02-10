#include<iostream>
using namespace std;

class Employee
{
    private:
    int a,b,c;

    public:
    int d,e;

    void setData(int a1, int a2, int a3);
    void getData(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<c<<endl;
        cout<<"value of d is "<<d<<endl;
        cout<<"value of e is "<<e<<endl;
    }

};

void Employee :: setData(int a1, int a2, int a3){
    a=a1;
    b=a2;
    c=a3;
}

int main()
{
    Employee aditi;
    aditi.d = 6;
    aditi.e = 8;
    aditi.setData(2, 1 ,4);
    aditi.getData();

   return 0;
}
