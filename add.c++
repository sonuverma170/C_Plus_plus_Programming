#include <iostream>
using namespace std;
class stu
{
    private:
    int a,b;
    public:
    void sum(int i,int j)
    {
        a=i;
        b=j;
        cout<<endl<<a+b;
    }
};
int main()
{
    stu k;
    k.sum(90,1);
    return 0;
}
