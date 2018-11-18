//program to shortened operator overloading
#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
	
	void getdata()
	{
		cout<<"Enter Your Real Part : ";
		cin>>real;
		cout<<"Enter Your Imaginary Part : ";
		cin>>img;
	}
	void outdata(const char *msg)
	{
		cout<<endl<<msg<<"("<<real<<","<<"i"<<img<<")"<<endl;
	}
    complex operator+=(complex c2)
    {
    	real=real+c2.real;
    	img=img+c2.img;
    	return *this;
    }
    void operator-=(complex c2)
    {
    	real=real-c2.real;
    	img=img-c2.img;
    	
    }
    void operator*=(complex c2)
    {
    	complex old=*this;
    	real=old.real*c2.real-old.img*c2.img;
    	img=old.real*c2.img+old.img*c2.real;
	}
};
int main()
{
	complex c1,c2,c3,c4;
	c1.getdata();
	c1.outdata("c1=");
	c2.getdata();
	c2.outdata("c2=");
	//+=
	c3=c2+=c2;      // c3=c2.operator+=(complex c2);
    c3.outdata("c3=");
    //-=
    c4=c1;
    c4-=c2;           
    c4.outdata("c4=");
    //*=
    c3=c1;
    c3*=c2;
    c3.outdata("c3=");
    return 0;
}
