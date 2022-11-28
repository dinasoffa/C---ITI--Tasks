#include <iostream>

using namespace std;
class person
{
protected:
    int id;
    char *name ;
public:
    person()
    {
        id=0;
        name ="null";
    }
    person (int id1, char *n)
    {
        id=id1;
        name=n;
    }
    void set_id(int id1){id=id1;}
    int get_id(){return id;}
    void set_name(char *n){name=n;}
    char * get_name(){return name ;}
    virtual float cal_sal()=0;

};
class employee:public person
{
protected:
    int age ;
    int dep;
    float salary;
public:
    employee()
    {
        int age=0;
        int dep=0;

    }
    employee(int age1, int dep1, int id1, char *n1):person(id1, n1)
    {
        age=age1;
        dep=dep1;
        salary=cal_sal();
    }
    void set_age(int age1){age =age1;}
    int get_age(){return age;}
    void set_depno(int dep1){dep=dep1;}
    int get_depno(){return dep;}
    float cal_sal ()
    {
        switch(dep)
        {
        case 1:
            {
                salary= 3000;
                break;
            }
        case 2:
            {
                salary= 5000;
                break;
            }
        case 3:
            {
                salary =7000;
                break;
            }
            return salary;
        }
    }

};
class manger:public employee
{
public:
    manger(){}
    manger(int age1, int dep1 , int id1, char *n2):employee(age1, dep1, id1, n2){}
    float cal_sal()
    {
        return salary*2;
    }
};
class total_salary
{
    person *p[3];
public:

    total_salary(person *p1, person *p2, person *p3, person *p4)
    {
        p[0]=p1;
        p[1]=p2;
        p[2]=p3;
        p[3]=p4;
    }
    float total_cal_salary()
    {
        float total=0.0;
        for (int i=0; i<4; i++)
        {
            total+=p[i]->cal_sal();
        }
        return total;
    }
};
int main()
{

    char **name=new char *[20];
    int id[3];
    int age[3];
    int dep[3];
    for (int i=0; i<4; i++)
    {
        name[i]=new char [20];
    }
    cout<<"enter the information of the four employees"<<endl;
    for (int i=0; i<4; i++)
    {
        cout << "enter the id of employee" <<i+1<< endl;
        cin>>id[i];
        cout <<"enter the age of employee"<<i+1<<endl;
        cin>>age[i];
        cout<<"enter the department number 1 or 2 or 3 of employee "<<i+1<<endl;
        cin>>dep[i];
        cout<<"enter the name of employee"<<i+1<<endl;
        cin>>name[i];

    }

    employee e1(age[0] , dep[0], id[0], name[0]);
    manger m1(age[1] , dep[1], id[1], name[1]);
    employee e2(age[2] , dep[2], id[2], name[2]);
    manger m2(age[3] , dep[3], id[3], name[3]);
    total_salary t(&e1, &m1, &e2, &m2);
    cout <<"the salary of employee 1 is "<<e1.cal_sal()<<endl;
    cout <<"the salary of employee 2 is "<<e2.cal_sal()<<endl;
    cout <<"the salary of manager 1 is "<<m1.cal_sal()<<endl;
    cout <<"the salary of manager 2 is "<<m2.cal_sal()<<endl;
    cout <<"the total salary is "<<t.total_cal_salary()<<endl;
    cout <<"the total salary is "<<t.total_cal_salary()<<endl;
    return 0;
}
