#include<iostream>
using namespace std;

class Base
{
    private:
    int a{0};
    int b{0};
    public:
    int x{0};
    int y{0};
    void methodA()
    {
        cout<<" This is method A of Base class "<<endl;
    }
};
class derived : public Base
{
    private:
    int c{0};
    int d{0};
    public:
    int p{0};
    int q{0};
    void methodB()
    {
        cout<<" This is method B of derived class "<<endl;
    }
};

int main()
{
    Base *obj = new derived();
    obj->methodA();
    return 0;
}