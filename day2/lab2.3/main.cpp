#include <iostream>

using namespace std;
void swapp(int& x, int& y);
int main()
{
    int x, y;
    cout<<"enter the two number"<<endl;
    cin >>x>>y;
    swapp(x,y);
    cout<<"x="<<x<<endl<<"y="<<y;

    return 0;
}
void swapp (int& x, int& y)
{
    int tmp;
    tmp=x;
    x=y;
    y=tmp;
}
