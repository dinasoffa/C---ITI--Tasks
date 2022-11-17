#include <iostream>
#include<cmath>
using namespace std;
class point
{
private:
    int x1, y1,x2,y2;
    float redius;
public:
    point()
    {
        //defult condtractor
        x1=0;
        y1=0;
        x2=0;
        y2=0;
    }
    point (int a, int b, int c, int d)
    {
        x1=a;
        x2=b;
        y1=c;
        y2=d;
    }
    void setx1 (int a)
    {
        x1=a;
    }
    void setx2 (int b)
    {
        x2=b;
    }
    void sety1(int c)
    {
        y1=c;
    }
    void sety2(int d)
    {
        y2=d;
    }
    int getx1(){return x1;}
    int getx2(){return x2;}
    int gety1(){return y1;}
    int gety2(){return y2;}
    float cal_r()
    {
        int l1= abs(getx2()-getx1());
        int l2 =abs(gety2()-gety1());
        redius=sqrt(pow(l1, 2)+pow(l2,2));
        return redius;
    }


};

int main()
{
    int x1,x2,y1,y2;
    cout << "enter the x1"<<endl;
    cin>>x1;
    cout << "enter the x2"<<endl;
    cin>>x2;
    cout << "enter the y1"<<endl;
    cin>>y1;
    cout << "enter the y2"<<endl;
    cin>>y2;
    point p1(x1, x2, y1, y2);
    cout <<"the redius is  "<<p1.cal_r();
    return 0;
}
