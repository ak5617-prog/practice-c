#include <iostream>
using namespace std;

class Int
{
private:
    int x;

public:
    void setdata(int a)
    {
        x = a;
    }
    void display()
    {
        cout << x << endl;
    }
    void add(Int a, Int b)
    {
        x = a.x + b.x;
    }
};
int main()
{
    Int result;
    Int first;
    Int second;

    first.setdata(2);
    second.setdata(4);

    result.add(first, second);
    result.display();
    return 0;
}