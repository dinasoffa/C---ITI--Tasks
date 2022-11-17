#include <iostream>

using namespace std;

int inline add (int a, int b);
int add (int a, int b, int c);
float add (float a, float b);
int main()
{
    int x, y, c;
    float a,b;
    cout << "enter the two number "<<endl;
    cin>> x>>y;
    int z=add(x,y);
    cout<<"the sum ="<<z<<endl;
    cout<<"enter the three number "<<endl;
    cin>>x>>y>>c;
    int r=add(x, y,c);
    cout<<"the sum ="<<r<<endl;
    cout<<"enter the float number "<<endl;
    cin >>a>>b;
    float t=add(a, b);
    cout<<"the sum="<<t<<endl;



    return 0;
}
int add (int a, int b)
{
    return a+b;
}
int add (int a, int b , int c)
{
    return a+b+c;
}
float add (float a , float b)
{
    return a+b;
}

