#include <iostream>
#include <cstdlib>
using namespace std;
class point
{
private:
    int x, y;
public:
    point()
    {
        //defult condtractor
        x=0;
        y=0;
    }
    point (int x1, int y1)
    {
        x=x1;
        y=y1;
    }
    point(int z)
    {
        x=y=z;
    }
    void setx (int x1)
    {
        x=x1;
    }
    void sety (int y1)
    {
        y=y1;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

};
class rectangle
{
    point a, b;
    int length, width;
public:
    rectangle(int x1, int y1, int x2, int y2):a(x1, y1),b(x2,y2)
    {
        length=abs(x1-x2);
        width=abs(y1-y2);
    }
    void setpoint(int x1, int y1)
    {
        a.setx(x1);
        a.sety(y1);
        length= abs(x1-a.getx());
        width= abs(y1-a.gety());
    }
    int area()
    {
        return length*width;
    }

};


int main()
{
    rectangle r(1,2,3,4);
    cout<<"the area is "<<r.area();
    return 0;
}
