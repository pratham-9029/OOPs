#include<iostream>
using namespace std;

class employee{
    
public:
    int e_id;
    string name;

public:
    void setEmployee();
    void getEmployee();

};

void employee::setEmployee()
{
    cout<<"Enter e_id: ";
    cin>>this->e_id;
    cout<<"Enter E_name: ";
    cin>>this->name;
}

void employee::getEmployee()
{
    cout<<"e_id: "<<this->e_id<<endl;
    cout<<"e_name: "<<this->name<<endl;

}

int main()
{
    employee emp;

    emp.setEmployee();
    emp.getEmployee();   

    return 0;
}