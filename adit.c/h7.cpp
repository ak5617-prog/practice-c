#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &a, c2 &b);

public:
    void setdata(int x)
    {
        val1 = x;
    }
    void display()
    {
        cout << "val 1: " << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &a, c2 &b);

public:
    void setdata(int y)
    {
        val2 = y;
    }
    void display()
    {
        cout << "val 2: " << val2 << endl;
    }
};
void exchange(c1 &a, c2 &b)
{
    int tmp = a.val1;
    a.val1 = b.val2;
    b.val2 = tmp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.setdata(3);
    oc1.display();

    oc2.setdata(7);
    oc2.display();

    exchange(oc1, oc2);
    cout << "values after exchange:" << endl;
    oc1.display();
    oc2.display();

    return 0;
}