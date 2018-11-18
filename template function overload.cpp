#include<iostream>
using namespace std;
template<class T>T mod(T a,T b)
{
	T c;
	c=a%b;
	return c;
}
int mod(double a,double b)
{
	int c;
	c=(int)a%(int)b;
	return c;
}
int main(void)
{
	cout<<mod(5,2)<<endl;
	cout<<mod(55555555,66666666)<<endl;
	cout<<mod(5.0,20.0)<<endl;
	
}
