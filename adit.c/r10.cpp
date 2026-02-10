#include<iostream>
using namespace std;

class BankAccount
{
    private:
    int balance;

    public:
    string name;



    void setData(string n, int b);
    void Deposit(int amount);
    void Withdraw(int amount);
    void ShowBalance();

};

  void BankAccount :: setData(string n, int b){
    name = n;
    balance = b;
  }
  void BankAccount :: Deposit(int amount){
    balance= balance + amount;
    cout<<" amount deposited "<<amount<<endl;
  }
  void BankAccount :: Withdraw(int amount){
    if(amount > balance){
     cout<<" Insufficient balance! "<<endl;
    }
    else{
        balance = balance - amount;
        cout<<" withdrawn successfull "<<amount<<endl;
    }
}
     void BankAccount :: ShowBalance(){


    cout<<" account holder "<<name<<endl;
    cout<<" current balance "<<balance<<endl;


  }

int main()
{
    BankAccount acc;
    acc.setData("Aditi", 1000);
    acc.ShowBalance();
    acc.Deposit(500);
    acc.Withdraw(300);
    acc.ShowBalance();

    return 0;
}



  