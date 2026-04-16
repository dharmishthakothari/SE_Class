#include<iostream>
using namespace std;
class Counter
{
	public :
		int count=0;
		static int count1;
		Counter()
		{
			count++;
			count1++;
		}
		void getCounter()
		{
			cout<<count<<"\t"<<count1<<endl;
		}
};
int Counter::count1=0;

int main()
{
	Counter c;
	c.getCounter();
	Counter c1;
	c1.getCounter();
	Counter c3;
	c3.getCounter();
	
}
