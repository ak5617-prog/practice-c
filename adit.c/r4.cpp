#include<iostream>
using namespace std;

class Library
{
    private:
    string bookname;
    int bookid;
    bool isissued;

    public:
    void setData(string name, int id);
    void issueBook();
    void returnBook();
    void showStatus(){
        cout<<" Bookname: "<<bookname<<endl;
        cout<<" Bookid: "<<bookid<<endl;
        if (isissued == true)
    {
        cout << "Status: Issued" << endl;
    }
    else
    {
        cout << "Status: Not Issued" << endl;
    }
 }

};
  void Library :: setData(string name,int id)
  {
    bookname=name;
    bookid=id;
    isissued=false;
  }
  void Library :: issueBook()
  {
    if(isissued==false)
    {
        cout<<" Book issued "<<endl;
        isissued=true;
    }
    else
    {
      cout<<" Already issued "<<endl;
    }
}
 void Library :: returnBook()
 {
    if(isissued==true){
        cout<<" Book returned "<<endl;
        isissued=false;
    }else{
        cout<<" Book was not issued "<<endl;
    }
 }
int main()
{
    Library ad;
    ad.setData("mockingbird",78);
    ad.showStatus();
    ad.issueBook();
    ad.issueBook();
    ad.returnBook();
    ad.returnBook();
    ad.showStatus();

    return 0;
}
