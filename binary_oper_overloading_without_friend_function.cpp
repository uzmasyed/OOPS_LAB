//Binary operator overloading without friend function
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
		Time operator+(Time t)
		{
			return Time(h+t.h,m+t.m,s+t.s);
		}
};
int main()
{
	
	Time t1;
	t1.read();
	Time t2;
	t2.read();
	Time t3;
	t3=t1+t2;    //t3=t1.opertor+(t2);
	cout<<"Result : ";
	t3.display();
	return 0;
}
