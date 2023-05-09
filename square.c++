#include<iostream>
using namespace std;
class stu
{
    private:
    int a;
    public: 
    void sqr(int i)
    {
        a=i*i;
        cout<<endl<<i*i;
    }
};
int main()
{
    stu k;
    k.sqr (5);
    return 0;
}