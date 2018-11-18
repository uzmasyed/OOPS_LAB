#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public:
		complex p()
		{
			this->x=10;
			return *this;     //return the address of current object
		}
		complex q()
		{
         y=20;
         return *this;
		}
		void display()
		{
			cout<<"x="<<x<<"  "<<"y="<<y;
		}
};
int main()
{
	complex c1;
	c1.p().q().display();   //chain of object
}
