#include<iostream>
using namespace std;
class animal
{
    public:
    int i=1,j=2,k=3;
    
    animal(int x,int y,int z)
    {
     x=i;
     y=j;
     z=k;
     cout<<endl<<"this is Parameter Constructor";

    }
 

};

int main()
{
    animal a(1,2,3);
  
}

