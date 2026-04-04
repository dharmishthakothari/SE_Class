#include<iostream>
using namespace std;
class Person
{
	public:
		int c_no,age;
		string name;
		Person()
		{
			
		}
		Person(string name1,int age1,int c_no1)
		{
			name=name1;
			age=age1;
			c_no=c_no1;			
		}
		void display()
		{
			cout<<name<<"\t"<<c_no<<"\t"<<age<<endl;
		}
};
int main()
{
	Person p[5];
	string name;
	int c_no,age;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter name ,cotanct number and age ";
		cin>>name>>c_no>>age;
		p[i]=Person(name,c_no,age);
		//cin>>p[i].name>>p[i].c_no>>p[i].age;
		
	}
	for(int i=0;i<5;i++)
	{
		p[i].display();
	}
	
	
}
