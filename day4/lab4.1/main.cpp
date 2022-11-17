#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class employee
{
private:

    int id;
    int salary ;
    char *name;

public:
    employee ()
    {
        //default constractor

    }
    void setter (int id_emp, int salary_emp , char *name_emp )
    {
        id=id_emp;
        salary= salary_emp;
        name = name_emp;
    }
    employee (int id1, int salary1, char *name1)
    {
        //parametar constractor
     id=id1;
     salary=salary1;
     name=name1;
    }


    void print ()
    {
        cout<<"the id is "<<id<<endl;
        cout<<"the salary is "<<salary<<endl;
        cout<<"the name is "<<name<<endl;
    }
    employee operator+( employee const& add)
    { //emp+emp
        employee temp;
        temp.id= id+ add.id;
        temp.salary=salary +add.salary;
        strcat(name,add.name);
        temp.name =name;
        return temp;
    }
    employee &operator=(const employee &equa11)
    {
        //emp=emp
        id=equa11.id;
        salary=equa11.salary;
        strcpy(name , equa11.name);
        return *this;


    }
    employee operator+(int x)
    {
        //emp+int x
        employee e;
        e.salary=salary+x;
        e.id=id;
        e.name=name;
        return e;

    }
    friend employee operator+(int z, employee const &e)
    {
        //int x+emp
        employee e3;
        e3.salary =e.salary +z;
        e3.name= e.name;
        e3.id =e.id;
        return e3 ;

    }
    employee operator+(const char *ch )
    {
        //emp+"ahamed
        employee e;
        strcat(name, ch);
        e.name=name;
        e.id=id;
        e.salary=salary;
        return e;
    }
    friend employee operator+( const char * ch,const employee  &e)
    {
        //ahmed +emp
        employee e1;
        strcat(e.name,ch);
        e1.name=e.name;
        e1.id=e.id;
        e1.salary=e.salary;

        return e1;
    }
    operator int()
    {
        return id;
    }
    operator char *()
    {
        return name;
    }

};
int main()
{
    employee e1, e2;
    int id1, id2;
    int salary1, salary2;
    char *name1=new char [20];
    char *name2=new char [20];
    cout<<"for add two employees enter the 2 id of 2 employee the you want to add "<<endl;
    cin>>id1;
    cin>>id2;
    cout<<"enter the 2 salary of 2 employee"<<endl;
    cin>>salary1;
    cin>>salary2;
    cout<<"enter the 2 name of 2 employee "<<endl;
    cin>>name1;
    cin>>name2;
    e1.setter(id1, salary1, name1);
    e2.setter(id2, salary2, name2);
    cout <<"the information of employee 1 is "<<endl;
    e1.print();
    cout <<"the information of employee 2 is "<<endl;
    e2.print();
    e1=e2;
    cout <<"the result from the equal operation that made employee 1= employee 2"<<endl;
    e1.print();
    employee text1="ali"+e1;
    cout<<"the result of the add char ali to employee1"<<endl;
    text1.print();
    employee text2=e2+"ahmed";
    cout<<"the result of the add char ahmed to employee2"<<endl;
    text2.print();
    employee y=7+e1;
    cout<<"the result from add integer to employee is that add 7 to employee 1 "<<endl;
    y.print();
    employee t=e1+7;
    cout<<"the result from add employee to integer is that add 7 to employee 1"<<endl;
    t.print();
    cout <<"the result of int operator (task6)"<<(int)e1<<endl;
    cout <<"the result of char operator (task7)"<<(char *)e1<<endl;
    employee add =e1+e2;
    cout<<"the result from add operation is "<<endl;
    add.print();
    return 0;
}
