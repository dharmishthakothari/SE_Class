#include<iostream>
using namespace std;
class Shape
{
	public:
	virtual float getArea()=0;	
};
class Square:public Shape
{
	public:
		int side;
		Square(int s)
		{
			side=s;			
		}
//		float getArea()
//		{
//			return side*side;
//		}
};
int main()
{
	Shape *s=new Square(12);
	cout<<s->getArea();
}
