#include<iostream>
using namespace std;
template<class T>void swap(T&a,T&b)
{
	T t;
	t=a;
	a=b;
	b=t;
}
int main()
{
	int x,y;
	cout<<"Enter the valye of x and y : ";
	cin>>x>>y;
	cout<<"value before Swap"<<"x="<<x<<"y="<<y<<endl;
	swap(x,y);
	cout<<" value After Swap"<<"x="<<x<<"y="<<y<<endl;
	
	char ch1,ch2;
	cout<<"Enter the character : ";
    cin>>ch1>>ch2;
	cout<<"value before Swap"<<"ch1="<<ch1<<"ch2="<<ch2<<endl;
	swap(ch1,ch2);
	cout<<" value After Swap"<<"ch1="<<ch1<<"ch2="<<ch2<<endl;
}
