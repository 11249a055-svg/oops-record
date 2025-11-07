#include<iostream>
using namespace std;
class complex
{
    int real,image;
    public:
    complex(int r=0,int i=0)
{

real=r,imag=i;
}
complex add(complex c)
{
    complex temp:
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}
void display()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
};
int main()
{
    complex c1(2,3),c2(4,5),c3;
    c3=c1.add c(2);
    cout<<"Result:";
    c3.display();
    return 0;
}