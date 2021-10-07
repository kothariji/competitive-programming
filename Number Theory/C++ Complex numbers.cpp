#include<iostream>
#include<new>
using namespace std;
class complex
{
float real,img;
public:

complex(float a,float b)
{
real=a;
img=b;
}
complex(float a)
{
real=a;
img=1;
}
complex(complex &p)
{
real=p.real;
img=p.img;
}
void display()
{
cout<<endl<<real<<"+i"<<img;
}
complex& sum(complex &z)
{
complex w(0,0);
w.real=this->real+z.real;
w.img=this->img+z.img;
return w;
}
};
int main()
{
complex *c1=new complex(2.0,3);
complex *c2=new complex(4);
complex *c3=new complex(*c1);
c1->display();
c2->display();
c3->display();
*c3=c2->sum(*c1);
c3->display();
return 0;
}
