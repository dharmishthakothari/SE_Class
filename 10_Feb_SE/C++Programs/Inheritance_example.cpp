#include<iostream>
using namespace std;
class A
{
	public:
		int c_no=12345;
		void greet()
		{
			cout<<"Good Morning "<<endl;
		}
};
class B:public A
{
	
};
int main()
{
	B objB;
	objB.greet();
	objB.c
}
