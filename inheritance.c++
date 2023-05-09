#include<iostream>
using namespace std;
class a
{
    public:
    int i;
    int sqr(int j)
    {
        i=j;
        cout<<endl<<i*i; 
    }
};
class b:a
{
public:
    int r;
    int cube(int s)
    {
        r=s;
        cout<<endl<<r*r*r;
    }
};
class c:b
{public:
    int u,v;
    int sum(int m,int n)
    {
        u=m;
        v=n;
        cout<<endl<<u+v;
    }
};
int main()
{
    a k0;
    k0.sqr(12);
    c k;
    b k1;
    k.sum(4,6);
    k1.cube(5);
  
    return 0;
}