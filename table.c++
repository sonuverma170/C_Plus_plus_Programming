#include<iostream>
using namespace std;
int table(int n)
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<endl<<n*i;
    }

};
        int main()
        {
            int n;
            cout<<endl<<"enter";
            cin>>n;
            table(n);
            return 0;
        }

