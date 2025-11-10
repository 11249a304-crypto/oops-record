#include<iostream>
using namespace std;
class Patient
{
    public:
    int patient_id;
    string name;
    string disease;
    void setPatient(int id,string n,string d)
    {
        patient_id=id;
        name=n;
        disease=d;
    }
    void showPatient();
};
void Patient::showPatient()
{
    cout<<"Patient ID: "<<patient_id
    <<", Name: "<<name
    <<", Disease: "<<disease<<endl;
}
int main()
{
    Patient p1,p2;
    p1.setPatient(304,"suu","AIML");
    p2.setPatient(302,"suuuuu","AICS");
    p1.showPatient();
    p2.showPatient();
    return 0;
}