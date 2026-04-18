#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream o("First.txt",ios::app);
	o<<"class timing is 10 to 11"<<endl;
	//o<<"We are running SQL also"<<endl;
	cout<<"Data Written ";
	
	o.close();
}
