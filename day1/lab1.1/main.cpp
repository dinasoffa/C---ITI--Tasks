#include <iostream>

using namespace std;
struct employee{
int id;
int salary;
string name;
};

int main()
{
    employee emp;
    cout<<"enter the id "<<endl;
    cin>>emp.id;
    cout<<"enter the name "<<endl;
    cin>>emp.name;
    cout<<"enter the salary"<<endl;
    cin>>emp.salary;
    cout << "the id is " <<emp.id<<endl<<"the name is "<<emp.name<<endl<<"the salary is "<<emp.salary<< endl;
    return 0;
}
