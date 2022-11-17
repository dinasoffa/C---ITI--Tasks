#include <iostream>

using namespace std;
using namespace std;
class employee
{

private:
    char *name;
    int id;
    int salary;

public:
    employee()
    {
        cout<<"this is defult constractor"<<endl;
        //defualt constractor
        id=0;
        salary=0;
        name ="dina";
    }
    employee push (int id1, int sal , char *n )
    {
         cout<<"function "<<endl;
         this->id= id1;
         this->salary=sal;
         this ->name=n;
   }
     void print  ()
   {
       cout<<"the id is "<<id<<endl;
       cout<< "the salary is "<<salary<<endl;
       cout<<"the name is "<<name<<endl;
   }

    employee (int id1, int s )
    {
        cout<<"this is second constractor "<<endl;
        id=id1;
        salary=s;

    }
    employee(char * n)
    {
        cout<<"this is third one "<<endl;
        name =n;
    }

    ~employee()
    {
        delete name;
    }

    void setter ( int id1, int s, char * n)
   {
       id=id1;
       salary=s;
       name=n;

   }

   employee(employee &p1)
    {
        cout<<"this is the copy one "<<endl;
        this->id =p1.id;
        this->salary=p1.salary;
        this->name =p1.name;
    }


};

int main()
{
    char *p=new char [20];
    int s, id;
    employee e;
    cout<<"enter the name "<<endl;
    cin>> p;
    cout <<"enter the salary "<<endl;
    cin>> s;
    cout<<"enter the id "<<endl;
    cin>> id;
    employee e1;
    employee e2(p);
    employee e3 (id, s);
    e.setter(id, s, p);
    //e1.print();
    //e.push(id, s, p);
    employee e4 (e);
    //e1.print();
    e4.print();



    return 0;
}
