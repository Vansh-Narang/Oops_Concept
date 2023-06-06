#include <iostream>
using namespace std;
class Animal
{
public:
    int height;
    int weight;
    void Speak()
    {
        cout << "Barking";
    }
};
class Dog : public Animal
{
};
class German : public Dog
{
};
int main()
{
    // Object made for G1
    // extend Dog
    // Dog extend Animal
    // Using speak function ()
    // Known as MultiLevel inheritance
    German g1;
    g1.Speak();
}
