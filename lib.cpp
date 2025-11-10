#include<iostream>
using namespace std;
class Book
{
    public:
    string title;
    string author;
    float price;
    void display()
    {
        cout<<"title: "<<title
        <<", author: "<<author
        <<" , price : rs"<<price<<endl; 
    }
};
int main()
{
    Book b1,b2;
    b1.title="c++ programing";
    b1.author="Bjarre Strousturup";
    b1.price=720;
    b2.title="Data Structure";
    b2.author="surya";
    b2.price=1000;
    b1.display();
    b1.display();
    return 0;

}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   