//function opeator overloading
#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
		void operator()(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")";
		}
};
int main()
{
point p1;
p1(10,20);  //p1.operator()(10,20);
p1.display();
return 0;
}
