 #include<iostream>
using namespace std;
class info
{
    char name[20];
    int age;
    public:
    int get()
    {
        cout<<endl<<"enter name";
        cin>>name;
        cout<<endl<<"enter age";
        cin>>age;
    }
    int display()
    {
        cout<<endl<<"name"<<name;
        cout<<endl<<"age"<<age;
    }
};
int main()
{
    info k[5];
    int i;
    for(i=0;i<=4;i++)
{ 
        k[i].get();
}           
    for(i=0;i<=4;i++)
    {
        k[i] .display();
    }
        return 0;

    }
    