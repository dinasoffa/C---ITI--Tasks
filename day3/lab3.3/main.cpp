#include <iostream>

using namespace std;

class Employee{
private:
   int id;
   char* name;
   int salary;

public :
    Employee fillemp(int id,char* name,int salary){
    this->id =id;
    this->name=name;
    this->salary=salary;
}
    Employee(){
    cout<<"\ndefault Constructor executed"<<endl;
    id=1;
    name="dina";
    salary=5000;
}
    Employee(int id){
    cout<<"\nsecond Constructor executed"<<endl;
    this->id=id;
}
    Employee(int id,int salary){
    cout<<"\nthird Constructor executed"<<endl;
    this->id=id;
    this->salary=salary;
}
    Employee(Employee &emp){
    cout<<"\ncopy Constructor executed"<<endl;
    this->id=emp.id;
    this->name=emp.name;
    this->salary=emp.salary;

}

    ~Employee(){
    cout<<"\nDestructor executed"<<endl;
}
     Employee operator+(Employee e)
     {
         Employee out;
         out.salary= salary+ e.salary;
         out.name =strcat(name, e.name);
         out.id= id+e.id;
     }

friend Employee operator+(int n, Employee e)
     {
         Employee e2;
         e2.salary= n +e.salary;

     }
     Employee operator+(Employee e , int m)
     {
         Employee out2 ;
         out2.name =e.name;
         out2.salary=e.salary;
         out2.salary =1000+ e.salary;
         return out2;

     }
     Employee operator+(Employee e, char *ch)
     {
         Employee e3;
         strcpy(e3.name, e.name);
         strcat (e3.name, ch);
         e3.id= e.id;
         e3.salary=e.salary;
         return e3;
     }

};

int main (void)
{
    Employee test, t2, t3, t4;
    t2=test.fillemp(10, "dina", 1000);
    t3=test.fillemp(20 , "gege", 3939);
    t4=t2+t3;

    return 0;
}



