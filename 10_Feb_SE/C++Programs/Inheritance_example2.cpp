#include<iostream>
using namespace std;
class Person
{
	public :
		int c_no;
		string name,address;
//		Person()
//		{
//			
//		}
		Person(string name1,string address1,int c_no1)
		{
			name=name1;
			address=address1;
			c_no=c_no1;
		}
		
		void display()
		{
			cout<<name<<address<<c_no<<endl;
		}
};
class Employee:public Person
{
	public:
	string dept;
	int salary;
	Employee(string name1,string address1,int c_no1,string dept1,int salary1)
	:
		Person(name1,address1,c_no1)
		{
		
		dept=dept1;
		salary=salary1;
	}
	void display()
	{
		Person::display();
		cout<<dept<<salary<<endl;
		
	}
//	void display_emp()
//	{
//		cout<<dept<<salary<<endl;
//	}
};

int main()
{
	Employee e("Dharmishtha","Paldi",2345,"software",12345);
	e.display();
	//e.display_emp();
}
