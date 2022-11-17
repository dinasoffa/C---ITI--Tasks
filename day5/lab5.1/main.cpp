#include <iostream>

using namespace std;
class employee
{
private:

    int id;
    int salary ;
    char *name;
    char *company_name;
    static int count1;

public:
    employee ()
    {
        //default constractor

    }
     employee (int id1, int salary1, char *name1)
    {
        //parametar constractor
     id=id1;
     salary=salary1;
     name=name1;
     count1++;
    }
     employee (int id1,  char *name1)
    {
        //parametar constractor
     id=id1;
     company_name=name1;
     count1++;
    }
     employee (int id1, int salary1)
    {
        //parametar constractor
     id=id1;
     salary=salary1;
     count1++;
    }
    void setter (int id_emp, int salary_emp , char *name_emp )
    {
        id=id_emp;
        salary= salary_emp;
        name = name_emp;
    }
    void set_name (char *name_company)
    {
        company_name=name_company;
    }
    char * get_name ()
    {
        return company_name;
    }
    void print ()
    {
        cout<<"the id is "<<id<<endl;
        cout<<"the salary is "<<salary<<endl;
        cout<<"the name is "<<name<<endl;
    }
    static int get_count()
    {
        return count1;
    }
    ~employee()
    {
        count1--;
    }
};
int employee::count1=0;
int main()
{
    char *name ="dina";
    char *emp_name="valu";
    employee e1, e2;
    e1.setter(1, 1000 , name);
    e2.set_name(emp_name);
    e1.print();
    cout<<"the company name is "<<e2.get_name();

    employee e3(1, 2000);
    employee e4(2, "valu");
    employee e5(3, 30000, "vadafon");
    employee arr2[3]={ employee(1,2000,"valu"),  employee (2, 30000, "vodafon"), employee (1,2000)};
    cout<<endl<<"the no of count is "<<e1.get_count();




    return 0;
}
