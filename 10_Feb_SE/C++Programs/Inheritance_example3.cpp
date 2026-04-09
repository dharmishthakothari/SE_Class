#include<iostream>
using namespace std;
class A
{
	public:
	void greet()
	{
		cout<<"Good Morning ";
	}
};
class B :public A
{
	
};
class C:public B
{
	
};
int main()
{
	B obj;
	obj.greet();
	C objC;
	objC.greet();
}

