#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    void Speak()
    {
        cout << "Human SPeaking" << endl;
    }
};
class Animal
{
public:
    int weight;
    void listen()
    {
        cout << "Animal Listening" << endl;
    }
};
class Hybrid : public Animal, public Human
{
};
int main()
{
    Hybrid h1;
    h1.listen();
    h1.Speak();
}