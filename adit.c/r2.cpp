#include<iostream>
using namespace std;


class Employee
{
    private:
    string name;
    int id,salary;

    public:
    void setData(string n,int i,int s);
    void showData()
    {
        cout<<" name: "<<name<<endl;
        cout<<" id: "<<id<<endl;
        cout<<" salary: "<<salary<<endl;
    }
    void addBonus(int Bonus);
};
  void Employee :: setData(string n,int i,int s)
  {
    name = n;
    id = i;
    salary = s;
  }

  void Employee :: addBonus(int Bonus)
  {
    salary = salary + Bonus;
    cout<<" Bonus: "<<Bonus<<endl;
  }
int main()
{
    Employee ash;
    ash.setData("Aditi",364,3000);
    ash.showData();
    ash.addBonus(200);
    ash.showData();

    return 0;
}
