#include <iostream>

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
        id=0;
        salary=0;
        name ="dina";
    }
    employee (int id1, int s )
    {
        id=id1;
        salary=s;

    }
    employee(char * n)
    {
        name =n;
    }
    employee (employee &p1)
    {
        id =p1.id;
        salary=p1.salary;
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
   void print  ()
   {
       cout<<"the id is "<<this->id<<endl;
       cout<< "the salary is "<<this->salary<<endl;
       cout<<"the name is "<<this->name<<endl;
   }
   employee push (int id1, int sal , char *n )
{
    //employee e;
    this->id= id1;
    this->salary=sal;
    this ->name=n;
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
    //e.setter(id, s, p);
    //e.print();
    //e1.print();
    e.push(id, s, p);
    e.print();


    return 0;
}
