#include <iostream>
using namespace std;

class student
{
private:
    int rollNo ;
    string name ;
public:
    void getStudent()
    {
        cout << "enter roll no : ";
        cin >> this->rollNo;
        cout << "enter name : " ;
        cin >> this->name;
    }
};

int main()
{
    student std;
    cout<<"Your rollno is" << std.getStudent();

    cout<<"Your name is ";
    std.getStudent();


    return 0;
}