#include <iostream>

using namespace std;
struct employee{
int id;
int salary;
string name;
};

int main()
{
    employee *ptr1=new employee;
    //ptr1=new employee;
    cout<<"enter the id "<<endl;
    cin>>(*ptr1).id;
    cout<<"enter the name "<<endl;
    cin>>(*ptr1).name;
    cout<<"enter the salary  "<<endl;
    cin>>(*ptr1).salary;
    cout << "the id is " <<(*ptr1).id<<endl<<"the name is "<<(*ptr1).name<<endl<<"the salary is "<<(*ptr1).salary<< endl;



    return 0;
}
