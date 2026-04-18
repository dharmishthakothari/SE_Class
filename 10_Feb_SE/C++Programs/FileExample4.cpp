#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream i("StaticExample.cpp");
	string data;
	while(!i.eof())
	{
		getline(i,data);
		cout<<data<<endl;
	}
}
