#include<iostream>
using namespace std;
class MulData      //base class
{
	protected:
		int a,b;
		public:
			void get(){
			cout<<"enetr the value if a..";
			cin>>a;
			cout<<"enetr the value if b..";
			cin>>b;}
};
class Multiple: public MulData   //derived class
{
	public:
	int pro;
	void mul()
	{
		pro=a*b;
		cout<<"a*b is..."<<pro;
	}
	};
	int main()
	{
		Multiple o1;
		o1.get();
		o1.mul();
		return 0;
	}

