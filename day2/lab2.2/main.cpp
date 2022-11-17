#include <iostream>

using namespace std;
class employee
{
    /*public:
        employee();
        virtual ~employee();
*/
private:
    char *name;
    int id;
    int salary;

public:
    void setter ( int id1, int s, char * n)
   {
       id=id1;
       salary=s;
       name=n;

   }


public:
    void getter ()
   {
       cout<<"the id is "<<id<<endl;
       cout<< "the salary is "<<salary<<endl;
       cout<<"the name is "<<name<<endl;
   }
};

int main()
{
    int x,y;
    char  *p=new char [20];
    employee e;

    //e.setter(3, 3000, "ahmed");
    cout<<"enter the id "<<endl;
    cin>>x;
    cout<<"enter the salary "<<endl;
    cin>>y;
    cout<<"enter the name "<<endl;
    cin>>p;
    e.setter(x, y, p);
    e.getter();
    return 0;
}
