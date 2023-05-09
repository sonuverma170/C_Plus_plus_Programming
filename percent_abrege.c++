 #include<iostream>
using namespace std;
class info
{
    int m1,m2,m3;
    public:
    int get()
    {
        cout<<endl<<"enter m1";
        cin>>m1;
            cout<<endl<<"enter m2";
        cin>>m2;
              cout<<endl<<"enter m3";
        cin>>m3;
              cout<<endl<<"total"<<m1+m2+m3;
              cout<<endl<<"percent"<<m1,m2,m3;
    }
};
int main()
{
    info k[2];
    int i;
    for(i=0;i<=1;i++)
    {
        k[i].get();
    }
    return 0;
    }