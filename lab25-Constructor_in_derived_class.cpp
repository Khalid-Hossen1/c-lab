#include<iostream>
using namespace std;

class alpha
{
    int x;
public:
    alpha(int i)
    {
        x=i;
        cout<< "alpha initialized\n";
    }
    void show_x()
    {
        cout<< "x = "<<x<<endl;
    }
};

class beta
{
    float y;
public:
    beta(float j)
    {
        y=j;
        cout<< "beta initialized\n";
    }
    void show_y()
    {
        cout<< "y = "<<y<<endl;
    }
};

class gamma:public alpha,public beta
{
    int m,n;
public:
    gamma(int a,float b,int c,int d):alpha(a),beta(b)
    {
        m=c;
        n=d;
        cout<< "gamma initialized\n";
    }
    void show_mn()
    {
        cout<< "m = "<<m<<endl;
        cout<< "n = "<<n<<endl;
    }
};
int main()
{
    gamma g(5,10.75,20,30);
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}
