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
class B
{
	public:
		void goodBye()
		{
			cout<<"Good Bye";
		}
};
class C :public A,public B
{
	
};
int main()
{
	C objC;
	objC.greet();
	objC.goodBye();
}
