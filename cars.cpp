#include <iostream>
using namespace std;
class Car
{
    public: 
    string model;
    string company;
    float price;
    void display()
    {
        cout<<"model"<<model;
        cout<<"company"<<company;
        cout<<"price"<<price<<endl;
    }    
};
int main()
{
    Car car1,car2,car3;
    car1.company="Rolls Royce";
    car1.model="GHOST V";
    car1.price=2500000000000;
    car2.company="BMW";
    car2.model="m530i";
    car2.price=8500000;
    car3.company="Mercedes Benz";
    car3.model="GLS 530s";
    car3.price=35000000;
    car1.display();
    car2.display();
    car3.display();
    return 0;
}
