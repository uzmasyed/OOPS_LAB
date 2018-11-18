#include<iostream>
#include<process.h>
using namespace std;
class array
{
	int a[5];
	public:
		void display()
		{
			for(int i=0;i<5;i++)
			cout<<a[i]<<endl;
		}
		int &operator[](int x)
		{
			if(x<0 || x>=5)
			{
				cout<<"Out Of Index"<<endl;
				exit(0);
			}
			return a[x];
		}
};
int main()
{
	array obj;
	obj[0]=10;    ///obj.operator[](x)=10;
	obj[1]=20;
	obj[2]=30;
	obj[3]=40;
	obj[4]=50;
	obj.display();
	obj[3]=8;
	cout<<endl;
	obj.display();
	cout<<endl;
	//out of index
	obj[10]=52;
	obj.display();
	
	return 0;
}
