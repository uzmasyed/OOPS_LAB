//Binary operator overloading using friend function
#include<iostream>
using namespace std;
class Time
{
	int h,m,s;
	public:
		Time(int h=0,int m=0,int s=0)
		{
			this->h=h;
			this->m=m;
			this->s=s;
		}
		void read()
		{
			cout<<"Enter hour,minute,second  :  ";
			cout<<"Enter Hour : ";
			cin>>h;
			cout<<"Enter Minute : ";
			cin>>m;
			cout<<"Enter Second : ";
			cin>>s;
		}
		void display()
		{
			if(s>=60)
			{
				m=m+s/60;
				s=s%60;
			}
			if(m>=60)
			{
				h=h+m/60;
				m=m%60;
			}
			cout<<h<<":"<<m<<":"<<s<<endl;
		}
		friend Time operator+(Time t1,Time t2)
		{
			return Time(t1.h+t2.h,t1.m+t2.m,t1.s+t2.s);
		}
};
int main()
{
	
	Time t1;
	t1.read();
	Time t2;
	t2.read();
	Time t3;
	t3=t1+t2;    //t3=opertor+(t1,t2);
	cout<<"Result : ";
	t3.display();
	return 0;
}
