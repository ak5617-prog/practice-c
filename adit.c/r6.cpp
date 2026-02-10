#include<iostream>
using namespace std;


class shop
{

    int Idnumber[100];
    int price[100];
    int counter;

    public:
  void initcounter(void) {counter=0;}
  void getprice(void);
  void display(void);
};
void shop :: getprice(void){
    cout<<"Enter Id of item number "<<counter+1<<endl;
    cin>>Idnumber[counter];
    cout<<"Enter price of item number "<<counter+1<<endl;
    cin>>price[counter];
    counter++;
}
void shop :: display(void){
    for(int i=0;i<counter;i++){
      cout<<"price of item with Id number "<<Idnumber[i]<<" is "<<price[i]<<endl;
    }

}
int main()
{
  shop aditi;
  aditi.initcounter();
  aditi.getprice();
  aditi.getprice();
  aditi.getprice();
  aditi.display();

 return 0;
}
