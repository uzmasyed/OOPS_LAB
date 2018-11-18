//unary operator overloading without friend function
#include<iostream>
using namespace std;
class unary
{
	int a,b;
	public:
		unary()
		{
			a=0;
			b=0;
		}
		unary(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<"a="<<a<<"b="<<b<<endl;
		}
		unary operator++()     //pre increment
		{
			return unary(++a,++b);
		}
	        unary operator++(int)  //post increment
		{
			return unary(a++,b++);
		}
		
};
int main()
{
	unary u1(10,20),u2,u3;
	u1.display();      //a=10,b=20
	u2=++u1;          //u2=u1.operator++()    //pre increment
	u1.display();     //a=11,b=21
	u2.display();     //a=11,b=21
	
	u3=u1++;         //u3=u1.operator++()    //post increment
	u1.display();    //a=12,b=22
	u3.display();    //a=11,b=21
	return 0;
}

