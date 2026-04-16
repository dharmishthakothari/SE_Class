#include<iostream>
using namespace std;
class Distance
{
	public :
		int feet,inch;
		Distance()
		{
			
		}
		Distance(int f,int i)
		{
			feet=f;
			inch=i;
		}
		void display()
		{
			cout<<feet<<"-"<<inch<<endl;
		}
		Distance operator +(Distance d)
		{
			Distance ans;
			ans.feet=feet+d.feet;
			ans.inch=inch+d.inch;
			return ans;
		}
		Distance operator++(int)
		{
			return Distance(feet++,inch++);
		}
		
};
int main()
{
	Distance d1(12,23),d2(2,3);
	d1.display();
	d2.display();
	
	Distance d3(0,0);
	d3=d1+d2;
	d3.display();

	d3++;
	d3.display();	
	
}
