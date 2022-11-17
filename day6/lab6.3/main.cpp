#include <iostream>

using namespace std;
class person
{
protected:
    int id;
    char *name;

public:
    person(int id1 , char * n)
    {
        id= id1;
        name=n;
    }
    void setid(int id1)
    {
        id=id1;
    }
    void setname(char *n)
    {
        name=n;
    }
    int getid(){return id;}
    char *getname(){return name;}


} ;

class employee: public person
{
    int salary;
public:
    employee (int id1, char *c, int s):person(id1, c)
    {
        salary=s;
    }
    void setdalary(int s)
    {
        salary =s;
    }
    int getsalart(){return salary;}
};
int main()
{
    char *n=new char [20];
    int id, s;
    cout<<"enter the id "<<endl;
    cin>>id;
    cout << "enter the name "<<endl;
    cin>>n;
    cout<<"enter the salary"<<endl;
    cin>>s;
    employee e(id, n,s);
    cout<<"the id is "<<e.getid()<<"the name is "<<e.getname()<<"the salary is "<<e.getsalart()<<endl;

    return 0;
}
