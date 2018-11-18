#include<iostream>          
using namespace std;
class test
{
	int x,y;
	public:
		test(int x=0,int y=0)
		{
			this->x=x;
			this->y=y;
		}
		test & setx(int a)
		{
			x=a;
			return *this;
		}
		test & sety(int b)
		{
			y=b;
			return *this;
		}
		void print()
		{
			cout<<"x="<<x<<"y="<<y<<endl;
		}
};
int main()
{
	test obj1(5,5);
	obj1.setx(10).sety(20).print();      //chain function calls //all calls modify the same object as the same object is returned by reference
	return 0;
}
