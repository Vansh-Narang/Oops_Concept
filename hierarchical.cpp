#include <iostream>
using namespace std;
// In this class a class act as parent class for both
class A
{
public:
    void function1()
    {
        cout << "Inside function 1" << endl;
    }
};
class B : public A
{
public:
    void function2()
    {
        cout << "Inside function 2" << endl;
    }
};
class C : public A
{
public:
    void function3()
    {
        cout << "Inside function 3" << endl;
    }
};
int main()
{
    A objA;
    objA.function1();

    B objB;
    objB.function1();
    // Can call function 1 and 2
    objB.function2();

    C objC;
    objC.function1();
    // Cannot call function 2
    objC.function3();
}