#include <iostream>

using namespace std;
int valume (int l, int w=10, int h=5);

int main()
{
    int v1,v2,v3,v4;
    v1=valume(2,2,2);
    v2 =valume(3,3);
    v3=valume(3);
    cout<<v1<<endl<<v2<<endl<<v3<<endl;

    return 0;
}
int valume (int l, int w, int h)
{
    return (l*w*h);
}
