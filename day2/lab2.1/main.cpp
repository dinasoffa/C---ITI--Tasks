#include <iostream>

using namespace std;
class employee
{
    public:
        employee();
        virtual ~employee();

private:
    char *name;
    int id;
    int salary;

public:
    void setter ( int id1, int s, char *n)
   {
       id1=id;
       s=salary;
       *n=*name;

   }


public:
    employee getter (employee e2)
   {
       return e2;
   }
};

int main()
{
    int x,y;
    char *p;
    employee e;
    cout<<"emter the id "<<endl;
    cin>>x;
    cout<<"enter the salary "<<endl;
    cin>>y;
    cout<<"enter the name "<<endl;
    cin>>*p;
    e.setter(x, y, &p);
    e2=e2.getter(e);
    cout<<e2.id<<e2.salary<<e2.name;
    return 0;
}
