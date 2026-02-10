#include<iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    public:

    void setdata(void)
    {
        cout<<"Enter id"<<endl;
        cin>>id;
    }
    void getdata(void)
    {
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main()
{
  Employee fb[4];
  for(int i=0; i<4; i++)
  {
    fb[i].setdata();
    fb[i].getdata();
  }
}
