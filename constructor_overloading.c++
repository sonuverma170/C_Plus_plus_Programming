#include<iostream>
using namespace std;
class stu
{
    int a,b,c;
    public:
    stu(int i)
    {
        a=i;
        cout<<endl<<a*a;
    }
    stu(int i,int j)
    {
        a=i;
        b=j;
        cout<<endl<<a+b;
    }
    stu(int i,int j,int k)
    {
        a=i;
        b=j;
        c=k;
        cout<<endl<<a+b+c;
    }
};
int main()
{

    stu(6);
    stu(6,10);
    stu(10,20,30);
    return 0;
}
    