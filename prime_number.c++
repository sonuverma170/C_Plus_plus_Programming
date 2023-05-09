#include<iostream>
using namespace std;
class stu
{
     int i,n,m = 0, flag = 0;
public:
 int prime(int n)
{
        m = n / 2;
        if (n == 0 || n == 1) {
            cout<< "is not a prime Number";
        } else {
            for (i = 2; i <= m; i++) {
                if (n % i == 0) {
                    cout<<"is not a prime";
                    flag = 1;
                    break;

                }
            }
        }
        if (flag == 0) {

        cout<<"is prime number";

        }

    }
};
int  main()
{
    stu k;
    k.prime(6);
    return 0;
}