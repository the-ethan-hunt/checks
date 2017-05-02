#include<iostream>
using namespace std;
class sample
{
	public:
	void swap(int &a,int &b)
	{
		int temp;
		temp=a;
		b=a;
		a=temp;
		
	}

};

main()
{
	int a,b;
	sample x;
	cout<<"enter no for swap\n"
	cin>>a>>b;
	x.swap(a,b);
	cout<<"a="<<a<<endl<<"b="<<b;



}