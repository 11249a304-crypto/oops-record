#include<iostream>
using namespace std;
class Employee
{
    public:
    int emp_id;
    string name;
    float salary;
    void setEmployee(int id,string n,float s)
    {
        emp_id=id;
        name=n;
        salary=s;
    }
    void displayEmployee();
};
void Employee::displayEmployee()
{
    cout<<"Employee ID"<<emp_id
    <<" , Employee Name: "<<name
    <<" , Salary: "<<salary<<endl;
}
int main()
{
    Employee e1,e2;
    e1.setEmployee(101,"Surya",80085.00);
    e2.setEmployee(102,"Vamsi",69699.00);
    e1.displayEmployee();
    e2.displayEmployee();
return 0;
}