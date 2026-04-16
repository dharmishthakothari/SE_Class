#include<iostream>
using namespace std;
class Person
{
	private :
		int age;
	public:
		string name;
	Person(string name1,int age1)
	{
		name=name1;
		age=age1;
	}
	
	friend void getAge(Person p);
};
void getAge(Person p)
{
	cout<<p.age;
}
int main()
{
	Person p("dharmishtha",30);
	getAge(p);
}
