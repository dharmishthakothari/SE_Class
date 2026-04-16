#include<iostream>
using namespace std;
class Person
{
	private :
		int c_no;
		
	void displayPrivate()
	{
		cout<<"displayPrivate()"<<endl;
	}	
		
		protected :
			int age;
		void displayProtected()
	{
		cout<<"displayProtected()"<<endl;
	}	
		
			
			
	public:
		
		string name;
		void display()
		{
			cout<<name<<"\t"<<c_no<<"\t"<<age<<endl;
		}
		void displayPublic()
	{
		cout<<"displayPublic()"<<endl;
	}	
		
};
class Employee : public Person
{
	public :
		//displayProtected();
		///display() ;
		void displayEmp()
		{
			cout<<age<<endl;
			displayProtected();
		}
		
	
};
int main()
{
	Person p;
	Employee e1;
	
	e1.displayEmp() ;
}
