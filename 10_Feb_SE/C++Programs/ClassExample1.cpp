#include<iostream>
using namespace std;
class Person
{
	public:
		int c_no,age;
		string name;
		void display()
		{
			cout<<name<<"\t"<<c_no<<"\t"<<age<<endl;
		}
};
int main()
{
	Person p[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter name ,cotanct number and age ";
		cin>>p[i].name>>p[i].c_no>>p[i].age;
	}
	for(int i=0;i<5;i++)
	{
		p[i].display();
	}
	p.
	
	
}
