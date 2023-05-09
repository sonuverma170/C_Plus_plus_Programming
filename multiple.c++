#include<iostream>
using namespace std;
class stu
{
    private:
    int a,b;
    public:
    int multi(int i,int j);
};

int stu::multi(int i,int j)
{
    a=i;
    b=j;
    cout<<endl<<"multi"<<a*b;
}
int main()
{
    stu k;
    k.multi(6,6);
    return 0; 
}
