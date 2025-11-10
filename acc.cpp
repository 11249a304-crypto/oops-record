#include<iostream>
using namespace std;
class Account
{
    public:
    int acc_no;
    string name;
    float balance;
    void display()
    {
        cout<<"Name: "<<name;
        cout<<", acc_no: "<<acc_no;
        cout<<", balance: "<<balance<<endl;
    }
};
int main()
{
    Account a1,a2;
    a1.name="Surya Vamsi";
    a1.acc_no=304;
    a1.balance=450;
    a2.name="suyash";
    a2.acc_no=404;
    a2.balance=600;
    a1.display();
    a2.display();
    return 0;
}