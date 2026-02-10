#include<iostream>
using namespace std;


class Employee
{

    int id;
    static int count;

    public:
    void setdata(void)
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        count ++;
    }
    void getdata(void)
    {
        cout<<" The id of this employee is "<< id << " and this is employee number "<< count<<endl;
    }

    static void getCount(void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee :: count ;
int main()
{
    Employee harry, Rohan, Lovish;

    harry.setdata();
    harry.getdata();
    Employee::getCount();

    Rohan.setdata();
    Rohan.getdata();
    Employee::getCount();

     Lovish.setdata();
    Lovish.getdata();
    Employee::getCount();



}


