#include<iostream>
using namespace std;
class a
{
    private:
    int i;
    public:
    int sqr(int j)
    {
        i=j;
        cout<<endl<<i*j;
    }
};
class b:public a
{
    private:
    int r;
    public:
    int cube(int i)
    {
        r=5 ;
        cout<<endl<<r*r*r;
    }
};
int main()
{
    b k;
    k.sqr(5);
    k.cube(6);
    return 0;
}
