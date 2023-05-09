#include<iostream>
using namespace std;
class stu 
{
    private:
    int a,b;
    public:
    int sqr(int i)
    {
        a=i;
        cout<<endl<<a*a;
    }
    int sqr(int k,int l)
    {
        a=k;
        b=l;
        sqr(a);
        cout<<endl<<"b*b*b";
    }
};
int main()
{
    stu k;
    k.sqr(6,1);
    return 0;
}
