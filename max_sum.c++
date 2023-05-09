#include<iostream>
using namespace std;
int sum(int i,int j)
{
    return i+j;


}
int max(int a,int b)
{
    if (a>b)
    return a;
    else
    return b;
}
int main()
    {
        int i,j;
        cout<<endl<<"enter";
        cin>>i;
        cout<<endl<<"enter";
        cin>>j;
        cout<<endl<<"sum"<<sum(i,j);
        cout<<endl<<"max"<<max(i,j);
        return 0;
    }
