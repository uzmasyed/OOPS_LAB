//<<,>>operator overloading
#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex(int real=0,int img=0)
		{
			this->real=real;
			this->img=img;
		}
		friend void operator>>(istream &i,complex &c)
		{
			cout<<"Enter real part";
			cin>>c.real;
			cout<<"Enter img part";
			cin>>c.img;
		}
		friend void operator<<(ostream &i,complex &c)
		{
		cout<<c.real<<"+i"<<c.img<<endl;
	    }
};
int main()
{
	complex c1;
	cout<<"Enter complex Number"<<endl;
	cin>>c1;
	cout<<"Your complex number is : ";
	cout<<c1;                                //operator<<(cout,c1)
}
