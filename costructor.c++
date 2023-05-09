#include<iostream>
using namespace std;
class stu
{
    int a,b;
    public:
    stu(int i,int j)
    {
        a=i;
        b=j;
        cout<<endl<<i+j;
    }
}; 


class info:public stu
{
    int c,d;
    public:
    info(int i,int j,int k,int l):stu(i,j)
    {
        c=k;
        d=l;
        cout<<endl<<c*d;
        stu(i,j);
    }
};
int main()
{
    info(10,40,30,80);
    return 0;
}
