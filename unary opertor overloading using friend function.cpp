//unary operator overloading using friend function
#include<iostream>
using namespace std;
class unary
{
	int a,b;
	public:
		unary()
		{
			a=b=0;
		}
		unary(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void display()
		{
			cout<<"a="<<a<<"  "<<"b="<<b<<endl;
		}
		friend unary operator++(unary &u)   //pre increment
		{
			return unary(++u.a,++u.b);
		}
		friend unary operator++(unary &u,int)        //post increment
		{
			return unary(u.a++,u.b++);
		}		
};
int main()
{
	unary u1(10,20),u2,u3;
	u1.display();
	u2=++u1;        //u2=operator++(u1);
	u1.display();
	u2.display();
	
	u3=u1++;      //u3=operator++(u1,10);
	u1.display();
	u3.display();
	return 0;
}
