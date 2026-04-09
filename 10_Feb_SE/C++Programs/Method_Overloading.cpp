#include<iostream>
using namespace std;
class A
{
	public:
	int addition(int no1,int no2)
	{
		return no1+no2;
	}
	int addition(int no1,int no2,int no3)
	{
		return no1+no2+no3;
	}
	float addition(int no1,float no2,float no3,int no4)
	{
		return no1+no2+no3+no4;
	}
	
	
};
int main()
{
	A obj;
	cout<<obj.addition(12,23)<<endl;
	cout<<obj.addition(12,23,44,45,45)<<endl;
	cout<<obj.addition(12,23.23,44.45)<<endl;
	
}
