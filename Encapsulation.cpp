#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int age;
    int height;

public:
    int getAge(int age)
    {
        this->age = age;
        return age;
    }
};
// Encapsulation achieved
int main()
{
    Student first;
    cout << first.getAge(5);
    return 0;
}
