#include <iostream>
using namespace std;

class student
{

    int rollNo = 10;
    string name = "Pratham";
public:
    void getStudent()
    {
        cout << "roll no is : " << this->rollNo<< endl;
        cout << "name is : " << this->name<< endl;
    }
};

int main()
{
    student std;

    std.getStudent();

    return 0;
}