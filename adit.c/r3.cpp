#include<iostream>
using namespace std;

class student
{
    private:
    int roll, marks;

    public:
    string name;

    void setData(string n, int r, int m);
    void getData(){
        cout<<" name "<<name<<endl;
        cout<<" roll number "<<roll<<endl;
        cout<<" marks "<<marks<<endl;
    }
    void ispassed();
};

  void student :: setData(string n, int r, int m)
  {
     name = n;
     roll = r;
     marks = m;
  }

    void student :: ispassed()
    {
        if(marks > 40){
            cout<<" pass "<<endl;
        }
        else{
            cout<<" fail "<<endl;
        }
    }

int main()
{
   student aditi;
   aditi.setData("ashly",364,80);
   aditi.getData();
   aditi.ispassed();

}
