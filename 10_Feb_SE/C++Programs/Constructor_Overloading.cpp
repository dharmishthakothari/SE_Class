#include<iostream>
using namespace std;
class Person
{
	public :
		int c_no;
		string name,address;
		Person(string name1)
		{
			name=name1;
		}
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
int main()
{
	Person p("Dharmishtha");
	p.display();
	Person p1("Nayan","Paldi",2345);
	p1.display();
		Person p2("Nayan","Paldi");
	p2.display();
	
}
