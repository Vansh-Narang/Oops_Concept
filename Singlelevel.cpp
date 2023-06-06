#include <iostream>
using namespace std;
class Student
{
public:
    int height;
};
class Vansh : public Student
{
};
int main()
{
    // Accessing height from Student through class Vansh
    Vansh v1;
    cout << v1.height;
}