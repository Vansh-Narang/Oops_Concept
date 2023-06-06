// Ambiguity is a condition for the compiler(problem) where it dont know what to do next just like a confusion
#include <iostream>
using namespace std;
class A
{
public:
    void abc()
    {
        cout << "Inside class A";
    }
};
class B
{
public:
    void abc()
    {
        cout << "Inside class B";
    }
};
class C : public A, public B
{
};
int main()
{
    // Object creation
    C objC;
    // Both function of above class are same now if a class inherits the above classes and call the function abc()then ambiguity will occur
    // to solve this use scope resoloution operator (::)
    objC.A ::abc();
    // telling the compiler to  call function of Class A

    return 0;
}
