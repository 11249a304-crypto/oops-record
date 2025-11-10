#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
    float marks;
    void display()
    {
        cout<<"Name"<<name;
        cout<<", roll_no: "<<roll_no;
        cout<<", Marks: "<<marks<<endl;
    }
};
int main()
{
    Student s1,s2;
    s1.name="Surya Vamsi";
    s1.roll_no=304;
    s1.marks=450;
    s2.name="su";
    s2.roll_no=404;
    s2.marks=600;
    s1.display();
    s2.display();
    return 0;

}