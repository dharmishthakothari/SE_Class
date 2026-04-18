#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream i("First.txt");
//	char data[20];
//	i>>data;
//	cout<<data;
//	
//	i>>data;
//	cout<<data;
//	
//	i>>data;
//	cout<<data;
	string data;
	getline(i,data);
	cout<<data;

	i.close();
}
