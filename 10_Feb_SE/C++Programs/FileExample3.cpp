#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream o("Second.txt");
	
	string data;
	while(data!="END")
	{
	
	
		cout<<"Enter data ";
		cin>>data;
		o<<data<<"\t";
	}
	
	
	
	//o<<"We are running SQL also"<<endl;
	cout<<"Data Written ";
	
	o.close();
}
