#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int age;
    int weight;
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Human Sleeping" << endl;
    }
};
int main()
{
    // Creating object
    Male obj;
    // Calling human (member variables)
    cout << obj.height << endl;
    cout << obj.weight << endl;
    cout << obj.age << endl;

    // calling male variable
    cout << obj.color << endl;
    // Setting age
    obj.setAge(5);
    // Checking
    cout << obj.age << endl;
    // Calling sleep function
    obj.sleep();
    return 0;
}